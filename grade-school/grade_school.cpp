#include "grade_school.h"

namespace grade_school {

    /** Insert `item` into `vec` in order. Assumes that `vec` is sorted. */
    template< typename T >
    typename std::vector<T>::iterator
    insert_sorted(std::vector<T> &vec, T const& item)
    {
        // First element from iterator where `item < other_element`.
        const auto upper_bound_it =
            std::upper_bound(vec.begin(), vec.end(), item);
        return vec.insert(upper_bound_it, item);
    }


    map<int, vector<string>> school::roster() const {
        return this->_roster;
    }

    void school::add(const string student_name, const int grade_num) {

        // Ensure there is a vector for the grade number.
        auto fixme = _roster.insert({grade_num, vector<string>()});
        // The iterator that points to the course students vector should be
        // returned anyways.
        vector<string> &course_students = fixme.first->second;

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
