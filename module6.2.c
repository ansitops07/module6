#include<iostream>
#include<string>

class LectureDetails {
private:
    std::string lecturerName;
    std::string subjectName;
    std::string courseName;
    static int lecturerCount;
public:
        LectureDetails() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
    }
    void addLectureDetails(const std::string& lecturer, const std::string& subject, const std::string& course) {
        if (lecturerCount < 5) {
            lecturerName = lecturer;
            subjectName = subject;
            courseName = course;
            lecturerCount++;
        } else {
            std::cout << "Cannot add more than 5 lecturers." << std::endl;
        }
    }
        void displayLectureDetails() const {
        std::cout << "Lecturer Name: " << lecturerName << std::endl;
        std::cout << "Subject Name: " << subjectName << std::endl;
        std::cout << "Course Name: " << courseName << std::endl;
    }
    static int getLecturerCount() {
        return lecturerCount;
    }
};

int LectureDetails::lecturerCount = 0;

int main() {
    LectureDetails lectures[5];

    lectures[0].addLectureDetails("Dr. Sagar", "Mathematics", "B.Sc Mathematics");
    lectures[1].addLectureDetails("Prof. nell", "Physics", "B.Sc Physics");
    lectures[2].addLectureDetails("Dr.satish", "Chemistry", "B.Sc Chemistry");
    lectures[3].addLectureDetails("Ms. Dhruv", "Biology", "B.Sc Biology");
    lectures[4].addLectureDetails("Mr. krish", "Computer Science", "B.Sc Computer Science");

      for (int i = 0; i < LectureDetails::getLecturerCount(); i++) {
        std::cout << "\nLecture Details for Lecturer " << (i + 1) << ":" << std::endl;
        lectures[i].displayLectureDetails();
    }

    return 0;
}
