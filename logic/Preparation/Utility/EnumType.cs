﻿
namespace Preparation.Utility
{
    /// <summary>
    /// 存放所有用到的枚举类型
    /// </summary>
    // public const int numOfObjNotMap = 5;在GameData中
    public enum GameObjType
    {
        Null = 0,
        Character = 1,
        Prop = 2,
        PickedProp = 3,
        Bullet = 4,
        BombedBullet = 5,

        Wall = 6,
        Grass = 7,
        Generator = 8,  // 发电机
        BirthPoint = 9,
        Doorway = 10,
        EmergencyExit = 11,
        OutOfBoundBlock = 12,  // 范围外
    }
    public enum ShapeType
    {
        Null = 0,
        Circle = 1,  // 子弹和人物为圆形，格子为方形
        Square = 2
    }
    public enum PlaceType  // 位置标志，包括陆地，草丛。游戏中每一帧都要刷新各个物体的该属性
    {
        Null = 0,
        Land = 1,
        Grass1 = 2,
        Grass2 = 3,
        Grass3 = 4,
    }
    public enum BulletType  // 子弹类型
    {
        Null = 0,
        OrdinaryBullet = 1,  // 普通子弹
        AtomBomb = 2,        // 原子弹
        FastBullet = 3,      // 快速子弹
        LineBullet = 4       // 直线子弹
    }
    public enum PropType  // 道具类型
    {
        Null = 0,
        addSpeed = 1,
        addLIFE = 2,
        Shield = 3,
        Spear = 4,
        Gem = 5,  // 新增：宝石
    }
    public enum CharacterType  // 职业
    {
        Null = 0,
        Assassin = 1,
        Vampire = 2,
        RecoverAfterBattle = 3,
        SpeedUpWhenLeavingGrass = 4,
        PSkill4 = 5,
        PSkill5 = 6
    }
    public enum ActiveSkillType  // 主动技能
    {
        Null = 0,
        BecomeAssassin = 1,
        BecomeVampire = 2,
        NuclearWeapon = 3,
        SuperFast = 4,
        ASkill4 = 5,
        ASkill5 = 6
    }
    public enum BuffType  // buff
    {
        Null = 0,
        AddSpeed = 1,
        AddLIFE = 2,
        Shield = 3,
        Spear = 4
    }

    public enum MapInfoObjType
    {
        Null = 0,
        BirthPoint1 = 1,//必须从1开始
        BirthPoint2 = 2,
        BirthPoint3 = 3,
        BirthPoint4 = 4,
        BirthPoint5 = 5,
        Wall = 6,
        Grass1 = 7,
        Grass2 = 8,
        Grass3 = 9,
        Generator = 10,  // 发电机
        Doorway = 11,
        EmergencyExit = 12
    }
}