#include <boost/thread.hpp>
#include <iostream>
int main(int argc, const char** argv) {
    for(int i = 0;i < 5;++i){
        std::cout << "このメッセージが5回表示されれば成功" << std::endl;
		boost::this_thread::sleep(boost::posix_time::milliseconds(1000));
    }
    return 0;
}
