#include "grade_school.h"

namespace grade_school {

    /** Insert `item` into a sorted vector in order. */
    template< typename T >
    typename std::vector<T>::iterator
    insert_sorted(std::vector<T> &vec, T const& item) {
        // First element from iterator where `item < other_element`.
        const auto upper_bound_it =
            std::upper_bound(vec.begin(), vec.end(), item);
        return vec.insert(upper_bound_it, item);
    }


    map<int, vector<string>> school::roster() const {
        return this->_roster;
    }

    void school::add(const string student_name, const int grade) {

        /* Method `std::map::insert` inserts an element into the container, if
         * the container doesn't already contain an element with the same key.
         * This ensures that there's always a vector with the roster for that
         * grade.  */
        map<int, vector<string>>::iterator it =
            _roster.insert({grade, vector<string>()}).first;

        vector<string> &course_students = it->second;

        insert_sorted(course_students, student_name);

    }

    vector<string> school::grade(const int grade) const {
        auto it = this->_roster.find(grade);
        if (it != this->_roster.end()) {
            return it->second;
        } else {
            return vector<string>();
        }
    }

}  // namespace grade_school
