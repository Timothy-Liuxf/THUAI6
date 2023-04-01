// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageType.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MessageType_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MessageType_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021005 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>   // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_MessageType_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal
{
    class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MessageType_2eproto
{
    static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MessageType_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace protobuf
{

    enum BulletType : int
    {
        NULL_BULLET_TYPE = 0,
        FLYING_KNIFE = 1,
        COMMON_ATTACK_OF_TRICKER = 2,
        BOMB_BOMB = 3,
        JUMPY_DUMPTY = 4,
        ATOM_BOMB = 5,
        BulletType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        BulletType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool BulletType_IsValid(int value);
    constexpr BulletType BulletType_MIN = NULL_BULLET_TYPE;
    constexpr BulletType BulletType_MAX = ATOM_BOMB;
    constexpr int BulletType_ARRAYSIZE = BulletType_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* BulletType_descriptor();
    template<typename T>
    inline const std::string& BulletType_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, BulletType>::value || ::std::is_integral<T>::value, "Incorrect type passed to function BulletType_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            BulletType_descriptor(), enum_t_value
        );
    }
    inline bool BulletType_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, BulletType* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<BulletType>(
            BulletType_descriptor(), name, value
        );
    }
    enum PlaceType : int
    {
        NULL_PLACE_TYPE = 0,
        LAND = 1,
        WALL = 2,
        GRASS = 3,
        CLASSROOM = 4,
        GATE = 5,
        HIDDEN_GATE = 6,
        WINDOW = 7,
        DOOR3 = 8,
        DOOR5 = 9,
        DOOR6 = 10,
        CHEST = 11,
        PlaceType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        PlaceType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool PlaceType_IsValid(int value);
    constexpr PlaceType PlaceType_MIN = NULL_PLACE_TYPE;
    constexpr PlaceType PlaceType_MAX = CHEST;
    constexpr int PlaceType_ARRAYSIZE = PlaceType_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PlaceType_descriptor();
    template<typename T>
    inline const std::string& PlaceType_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, PlaceType>::value || ::std::is_integral<T>::value, "Incorrect type passed to function PlaceType_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            PlaceType_descriptor(), enum_t_value
        );
    }
    inline bool PlaceType_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PlaceType* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PlaceType>(
            PlaceType_descriptor(), name, value
        );
    }
    enum ShapeType : int
    {
        NULL_SHAPE_TYPE = 0,
        CIRCLE = 1,
        SQUARE = 2,
        ShapeType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        ShapeType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool ShapeType_IsValid(int value);
    constexpr ShapeType ShapeType_MIN = NULL_SHAPE_TYPE;
    constexpr ShapeType ShapeType_MAX = SQUARE;
    constexpr int ShapeType_ARRAYSIZE = ShapeType_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ShapeType_descriptor();
    template<typename T>
    inline const std::string& ShapeType_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, ShapeType>::value || ::std::is_integral<T>::value, "Incorrect type passed to function ShapeType_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            ShapeType_descriptor(), enum_t_value
        );
    }
    inline bool ShapeType_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ShapeType* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ShapeType>(
            ShapeType_descriptor(), name, value
        );
    }
    enum PropType : int
    {
        NULL_PROP_TYPE = 0,
        ADD_SPEED = 1,
        ADD_LIFE_OR_CLAIRAUDIENCE = 2,
        ADD_HP_OR_AP = 3,
        SHIELD_OR_SPEAR = 4,
        KEY3 = 5,
        KEY5 = 6,
        KEY6 = 7,
        RECOVERY_FROM_DIZZINESS = 8,
        PropType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        PropType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool PropType_IsValid(int value);
    constexpr PropType PropType_MIN = NULL_PROP_TYPE;
    constexpr PropType PropType_MAX = RECOVERY_FROM_DIZZINESS;
    constexpr int PropType_ARRAYSIZE = PropType_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PropType_descriptor();
    template<typename T>
    inline const std::string& PropType_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, PropType>::value || ::std::is_integral<T>::value, "Incorrect type passed to function PropType_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            PropType_descriptor(), enum_t_value
        );
    }
    inline bool PropType_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PropType* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PropType>(
            PropType_descriptor(), name, value
        );
    }
    enum StudentBuffType : int
    {
        NULL_SBUFF_TYPE = 0,
        STUDENT_ADD_SPEED = 1,
        ADD_LIFE = 2,
        SHIELD = 3,
        STUDENT_INVISIBLE = 4,
        StudentBuffType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        StudentBuffType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool StudentBuffType_IsValid(int value);
    constexpr StudentBuffType StudentBuffType_MIN = NULL_SBUFF_TYPE;
    constexpr StudentBuffType StudentBuffType_MAX = STUDENT_INVISIBLE;
    constexpr int StudentBuffType_ARRAYSIZE = StudentBuffType_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StudentBuffType_descriptor();
    template<typename T>
    inline const std::string& StudentBuffType_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, StudentBuffType>::value || ::std::is_integral<T>::value, "Incorrect type passed to function StudentBuffType_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            StudentBuffType_descriptor(), enum_t_value
        );
    }
    inline bool StudentBuffType_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StudentBuffType* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<StudentBuffType>(
            StudentBuffType_descriptor(), name, value
        );
    }
    enum PlayerState : int
    {
        NULL_STATUS = 0,
        IDLE = 1,
        LEARNING = 2,
        ADDICTED = 3,
        QUIT = 4,
        GRADUATED = 5,
        TREATED = 6,
        RESCUED = 7,
        STUNNED = 8,
        TREATING = 9,
        RESCUING = 10,
        SWINGING = 11,
        ATTACKING = 12,
        LOCKING = 13,
        RUMMAGING = 14,
        CLIMBING = 15,
        OPENING_A_CHEST = 16,
        USING_SPECIAL_SKILL = 17,
        OPENING_A_GATE = 18,
        PlayerState_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        PlayerState_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool PlayerState_IsValid(int value);
    constexpr PlayerState PlayerState_MIN = NULL_STATUS;
    constexpr PlayerState PlayerState_MAX = OPENING_A_GATE;
    constexpr int PlayerState_ARRAYSIZE = PlayerState_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PlayerState_descriptor();
    template<typename T>
    inline const std::string& PlayerState_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, PlayerState>::value || ::std::is_integral<T>::value, "Incorrect type passed to function PlayerState_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            PlayerState_descriptor(), enum_t_value
        );
    }
    inline bool PlayerState_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PlayerState* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PlayerState>(
            PlayerState_descriptor(), name, value
        );
    }
    enum TrickerBuffType : int
    {
        NULL_TBUFF_TYPE = 0,
        TRICKER_ADD_SPEED = 1,
        SPEAR = 2,
        ADD_AP = 3,
        CLAIRAUDIENCE = 4,
        TRICKER_INVISIBLE = 5,
        TrickerBuffType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        TrickerBuffType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool TrickerBuffType_IsValid(int value);
    constexpr TrickerBuffType TrickerBuffType_MIN = NULL_TBUFF_TYPE;
    constexpr TrickerBuffType TrickerBuffType_MAX = TRICKER_INVISIBLE;
    constexpr int TrickerBuffType_ARRAYSIZE = TrickerBuffType_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TrickerBuffType_descriptor();
    template<typename T>
    inline const std::string& TrickerBuffType_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, TrickerBuffType>::value || ::std::is_integral<T>::value, "Incorrect type passed to function TrickerBuffType_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            TrickerBuffType_descriptor(), enum_t_value
        );
    }
    inline bool TrickerBuffType_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, TrickerBuffType* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TrickerBuffType>(
            TrickerBuffType_descriptor(), name, value
        );
    }
    enum PlayerType : int
    {
        NULL_PLAYER_TYPE = 0,
        STUDENT_PLAYER = 1,
        TRICKER_PLAYER = 2,
        PlayerType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        PlayerType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool PlayerType_IsValid(int value);
    constexpr PlayerType PlayerType_MIN = NULL_PLAYER_TYPE;
    constexpr PlayerType PlayerType_MAX = TRICKER_PLAYER;
    constexpr int PlayerType_ARRAYSIZE = PlayerType_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PlayerType_descriptor();
    template<typename T>
    inline const std::string& PlayerType_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, PlayerType>::value || ::std::is_integral<T>::value, "Incorrect type passed to function PlayerType_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            PlayerType_descriptor(), enum_t_value
        );
    }
    inline bool PlayerType_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PlayerType* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PlayerType>(
            PlayerType_descriptor(), name, value
        );
    }
    enum StudentType : int
    {
        NULL_STUDENT_TYPE = 0,
        ATHLETE = 1,
        TEACHER = 2,
        STRAIGHT_A_STUDENT = 3,
        ROBOT = 4,
        TECH_OTAKU = 5,
        StudentType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        StudentType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool StudentType_IsValid(int value);
    constexpr StudentType StudentType_MIN = NULL_STUDENT_TYPE;
    constexpr StudentType StudentType_MAX = TECH_OTAKU;
    constexpr int StudentType_ARRAYSIZE = StudentType_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StudentType_descriptor();
    template<typename T>
    inline const std::string& StudentType_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, StudentType>::value || ::std::is_integral<T>::value, "Incorrect type passed to function StudentType_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            StudentType_descriptor(), enum_t_value
        );
    }
    inline bool StudentType_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StudentType* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<StudentType>(
            StudentType_descriptor(), name, value
        );
    }
    enum TrickerType : int
    {
        NULL_TRICKER_TYPE = 0,
        ASSASSIN = 1,
        KLEE = 2,
        A_NOISY_PERSON = 3,
        TRICKERTYPE4 = 4,
        TrickerType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        TrickerType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool TrickerType_IsValid(int value);
    constexpr TrickerType TrickerType_MIN = NULL_TRICKER_TYPE;
    constexpr TrickerType TrickerType_MAX = TRICKERTYPE4;
    constexpr int TrickerType_ARRAYSIZE = TrickerType_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TrickerType_descriptor();
    template<typename T>
    inline const std::string& TrickerType_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, TrickerType>::value || ::std::is_integral<T>::value, "Incorrect type passed to function TrickerType_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            TrickerType_descriptor(), enum_t_value
        );
    }
    inline bool TrickerType_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, TrickerType* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TrickerType>(
            TrickerType_descriptor(), name, value
        );
    }
    enum GameState : int
    {
        NULL_GAME_STATE = 0,
        GAME_START = 1,
        GAME_RUNNING = 2,
        GAME_END = 3,
        GameState_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
        GameState_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
    };
    bool GameState_IsValid(int value);
    constexpr GameState GameState_MIN = NULL_GAME_STATE;
    constexpr GameState GameState_MAX = GAME_END;
    constexpr int GameState_ARRAYSIZE = GameState_MAX + 1;

    const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GameState_descriptor();
    template<typename T>
    inline const std::string& GameState_Name(T enum_t_value)
    {
        static_assert(::std::is_same<T, GameState>::value || ::std::is_integral<T>::value, "Incorrect type passed to function GameState_Name.");
        return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
            GameState_descriptor(), enum_t_value
        );
    }
    inline bool GameState_Parse(
        ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, GameState* value
    )
    {
        return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<GameState>(
            GameState_descriptor(), name, value
        );
    }
    // ===================================================================

    // ===================================================================

    // ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

    // @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf

PROTOBUF_NAMESPACE_OPEN

template<>
struct is_proto_enum<::protobuf::BulletType> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::BulletType>()
{
    return ::protobuf::BulletType_descriptor();
}
template<>
struct is_proto_enum<::protobuf::PlaceType> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::PlaceType>()
{
    return ::protobuf::PlaceType_descriptor();
}
template<>
struct is_proto_enum<::protobuf::ShapeType> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::ShapeType>()
{
    return ::protobuf::ShapeType_descriptor();
}
template<>
struct is_proto_enum<::protobuf::PropType> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::PropType>()
{
    return ::protobuf::PropType_descriptor();
}
template<>
struct is_proto_enum<::protobuf::StudentBuffType> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::StudentBuffType>()
{
    return ::protobuf::StudentBuffType_descriptor();
}
template<>
struct is_proto_enum<::protobuf::PlayerState> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::PlayerState>()
{
    return ::protobuf::PlayerState_descriptor();
}
template<>
struct is_proto_enum<::protobuf::TrickerBuffType> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::TrickerBuffType>()
{
    return ::protobuf::TrickerBuffType_descriptor();
}
template<>
struct is_proto_enum<::protobuf::PlayerType> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::PlayerType>()
{
    return ::protobuf::PlayerType_descriptor();
}
template<>
struct is_proto_enum<::protobuf::StudentType> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::StudentType>()
{
    return ::protobuf::StudentType_descriptor();
}
template<>
struct is_proto_enum<::protobuf::TrickerType> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::TrickerType>()
{
    return ::protobuf::TrickerType_descriptor();
}
template<>
struct is_proto_enum<::protobuf::GameState> : ::std::true_type
{
};
template<>
inline const EnumDescriptor* GetEnumDescriptor<::protobuf::GameState>()
{
    return ::protobuf::GameState_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MessageType_2eproto
