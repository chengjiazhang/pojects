package banyuan.dao;

import banyuan.entity.User;
import org.apache.ibatis.annotations.Select;

public interface UserDao {
@Select("select * from login_info ")
    User findAll(int id);
}
