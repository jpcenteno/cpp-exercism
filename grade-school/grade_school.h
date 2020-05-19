#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <map>
#include <string>
#include <vector>

using namespace std;

namespace grade_school {

    class school {
    public:

        map<int, vector<string>> roster() const;

        void add(const string student_name, const int grade);

        vector<string> grade(const int grade) const;

    private:

        map<int, vector<string>> _roster;

    };

}  // namespace grade_school

#endif // GRADE_SCHOOL_H
