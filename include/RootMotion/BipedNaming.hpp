// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BipedNaming
  class BipedNaming : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::BipedNaming::BoneType
    struct BoneType;
    // Nested type: RootMotion::BipedNaming::BoneSide
    struct BoneSide;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.BipedNaming/BoneType
    struct BoneType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: BoneType
      constexpr BoneType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.BipedNaming/BoneType Unassigned
      static constexpr const int Unassigned = 0;
      // Get static field: static public RootMotion.BipedNaming/BoneType Unassigned
      static RootMotion::BipedNaming::BoneType _get_Unassigned();
      // Set static field: static public RootMotion.BipedNaming/BoneType Unassigned
      static void _set_Unassigned(RootMotion::BipedNaming::BoneType value);
      // static field const value: static public RootMotion.BipedNaming/BoneType Spine
      static constexpr const int Spine = 1;
      // Get static field: static public RootMotion.BipedNaming/BoneType Spine
      static RootMotion::BipedNaming::BoneType _get_Spine();
      // Set static field: static public RootMotion.BipedNaming/BoneType Spine
      static void _set_Spine(RootMotion::BipedNaming::BoneType value);
      // static field const value: static public RootMotion.BipedNaming/BoneType Head
      static constexpr const int Head = 2;
      // Get static field: static public RootMotion.BipedNaming/BoneType Head
      static RootMotion::BipedNaming::BoneType _get_Head();
      // Set static field: static public RootMotion.BipedNaming/BoneType Head
      static void _set_Head(RootMotion::BipedNaming::BoneType value);
      // static field const value: static public RootMotion.BipedNaming/BoneType Arm
      static constexpr const int Arm = 3;
      // Get static field: static public RootMotion.BipedNaming/BoneType Arm
      static RootMotion::BipedNaming::BoneType _get_Arm();
      // Set static field: static public RootMotion.BipedNaming/BoneType Arm
      static void _set_Arm(RootMotion::BipedNaming::BoneType value);
      // static field const value: static public RootMotion.BipedNaming/BoneType Leg
      static constexpr const int Leg = 4;
      // Get static field: static public RootMotion.BipedNaming/BoneType Leg
      static RootMotion::BipedNaming::BoneType _get_Leg();
      // Set static field: static public RootMotion.BipedNaming/BoneType Leg
      static void _set_Leg(RootMotion::BipedNaming::BoneType value);
      // static field const value: static public RootMotion.BipedNaming/BoneType Tail
      static constexpr const int Tail = 5;
      // Get static field: static public RootMotion.BipedNaming/BoneType Tail
      static RootMotion::BipedNaming::BoneType _get_Tail();
      // Set static field: static public RootMotion.BipedNaming/BoneType Tail
      static void _set_Tail(RootMotion::BipedNaming::BoneType value);
      // static field const value: static public RootMotion.BipedNaming/BoneType Eye
      static constexpr const int Eye = 6;
      // Get static field: static public RootMotion.BipedNaming/BoneType Eye
      static RootMotion::BipedNaming::BoneType _get_Eye();
      // Set static field: static public RootMotion.BipedNaming/BoneType Eye
      static void _set_Eye(RootMotion::BipedNaming::BoneType value);
    }; // RootMotion.BipedNaming/BoneType
    #pragma pack(pop)
    static check_size<sizeof(BipedNaming::BoneType), 0 + sizeof(int)> __RootMotion_BipedNaming_BoneTypeSizeCheck;
    static_assert(sizeof(BipedNaming::BoneType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.BipedNaming/BoneSide
    struct BoneSide/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: BoneSide
      constexpr BoneSide(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.BipedNaming/BoneSide Center
      static constexpr const int Center = 0;
      // Get static field: static public RootMotion.BipedNaming/BoneSide Center
      static RootMotion::BipedNaming::BoneSide _get_Center();
      // Set static field: static public RootMotion.BipedNaming/BoneSide Center
      static void _set_Center(RootMotion::BipedNaming::BoneSide value);
      // static field const value: static public RootMotion.BipedNaming/BoneSide Left
      static constexpr const int Left = 1;
      // Get static field: static public RootMotion.BipedNaming/BoneSide Left
      static RootMotion::BipedNaming::BoneSide _get_Left();
      // Set static field: static public RootMotion.BipedNaming/BoneSide Left
      static void _set_Left(RootMotion::BipedNaming::BoneSide value);
      // static field const value: static public RootMotion.BipedNaming/BoneSide Right
      static constexpr const int Right = 2;
      // Get static field: static public RootMotion.BipedNaming/BoneSide Right
      static RootMotion::BipedNaming::BoneSide _get_Right();
      // Set static field: static public RootMotion.BipedNaming/BoneSide Right
      static void _set_Right(RootMotion::BipedNaming::BoneSide value);
    }; // RootMotion.BipedNaming/BoneSide
    #pragma pack(pop)
    static check_size<sizeof(BipedNaming::BoneSide), 0 + sizeof(int)> __RootMotion_BipedNaming_BoneSideSizeCheck;
    static_assert(sizeof(BipedNaming::BoneSide) == 0x4);
    // Creating value type constructor for type: BipedNaming
    BipedNaming() noexcept {}
    // Get static field: static public System.String[] typeLeft
    static ::Array<::Il2CppString*>* _get_typeLeft();
    // Set static field: static public System.String[] typeLeft
    static void _set_typeLeft(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeRight
    static ::Array<::Il2CppString*>* _get_typeRight();
    // Set static field: static public System.String[] typeRight
    static void _set_typeRight(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeSpine
    static ::Array<::Il2CppString*>* _get_typeSpine();
    // Set static field: static public System.String[] typeSpine
    static void _set_typeSpine(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeHead
    static ::Array<::Il2CppString*>* _get_typeHead();
    // Set static field: static public System.String[] typeHead
    static void _set_typeHead(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeArm
    static ::Array<::Il2CppString*>* _get_typeArm();
    // Set static field: static public System.String[] typeArm
    static void _set_typeArm(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeLeg
    static ::Array<::Il2CppString*>* _get_typeLeg();
    // Set static field: static public System.String[] typeLeg
    static void _set_typeLeg(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeTail
    static ::Array<::Il2CppString*>* _get_typeTail();
    // Set static field: static public System.String[] typeTail
    static void _set_typeTail(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeEye
    static ::Array<::Il2CppString*>* _get_typeEye();
    // Set static field: static public System.String[] typeEye
    static void _set_typeEye(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeExclude
    static ::Array<::Il2CppString*>* _get_typeExclude();
    // Set static field: static public System.String[] typeExclude
    static void _set_typeExclude(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeExcludeSpine
    static ::Array<::Il2CppString*>* _get_typeExcludeSpine();
    // Set static field: static public System.String[] typeExcludeSpine
    static void _set_typeExcludeSpine(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeExcludeHead
    static ::Array<::Il2CppString*>* _get_typeExcludeHead();
    // Set static field: static public System.String[] typeExcludeHead
    static void _set_typeExcludeHead(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeExcludeArm
    static ::Array<::Il2CppString*>* _get_typeExcludeArm();
    // Set static field: static public System.String[] typeExcludeArm
    static void _set_typeExcludeArm(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeExcludeLeg
    static ::Array<::Il2CppString*>* _get_typeExcludeLeg();
    // Set static field: static public System.String[] typeExcludeLeg
    static void _set_typeExcludeLeg(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeExcludeTail
    static ::Array<::Il2CppString*>* _get_typeExcludeTail();
    // Set static field: static public System.String[] typeExcludeTail
    static void _set_typeExcludeTail(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] typeExcludeEye
    static ::Array<::Il2CppString*>* _get_typeExcludeEye();
    // Set static field: static public System.String[] typeExcludeEye
    static void _set_typeExcludeEye(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] pelvis
    static ::Array<::Il2CppString*>* _get_pelvis();
    // Set static field: static public System.String[] pelvis
    static void _set_pelvis(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] hand
    static ::Array<::Il2CppString*>* _get_hand();
    // Set static field: static public System.String[] hand
    static void _set_hand(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] foot
    static ::Array<::Il2CppString*>* _get_foot();
    // Set static field: static public System.String[] foot
    static void _set_foot(::Array<::Il2CppString*>* value);
    // static public UnityEngine.Transform[] GetBonesOfType(RootMotion.BipedNaming/BoneType boneType, UnityEngine.Transform[] bones)
    // Offset: 0x1CA642C
    static ::Array<UnityEngine::Transform*>* GetBonesOfType(RootMotion::BipedNaming::BoneType boneType, ::Array<UnityEngine::Transform*>* bones);
    // static public UnityEngine.Transform[] GetBonesOfSide(RootMotion.BipedNaming/BoneSide boneSide, UnityEngine.Transform[] bones)
    // Offset: 0x1CA672C
    static ::Array<UnityEngine::Transform*>* GetBonesOfSide(RootMotion::BipedNaming::BoneSide boneSide, ::Array<UnityEngine::Transform*>* bones);
    // static public UnityEngine.Transform[] GetBonesOfTypeAndSide(RootMotion.BipedNaming/BoneType boneType, RootMotion.BipedNaming/BoneSide boneSide, UnityEngine.Transform[] bones)
    // Offset: 0x1CA697C
    static ::Array<UnityEngine::Transform*>* GetBonesOfTypeAndSide(RootMotion::BipedNaming::BoneType boneType, RootMotion::BipedNaming::BoneSide boneSide, ::Array<UnityEngine::Transform*>* bones);
    // static public UnityEngine.Transform GetFirstBoneOfTypeAndSide(RootMotion.BipedNaming/BoneType boneType, RootMotion.BipedNaming/BoneSide boneSide, UnityEngine.Transform[] bones)
    // Offset: 0x1CA6A00
    static UnityEngine::Transform* GetFirstBoneOfTypeAndSide(RootMotion::BipedNaming::BoneType boneType, RootMotion::BipedNaming::BoneSide boneSide, ::Array<UnityEngine::Transform*>* bones);
    // static public UnityEngine.Transform GetNamingMatch(UnityEngine.Transform[] transforms, params System.String[][] namings)
    // Offset: 0x1CA6AAC
    static UnityEngine::Transform* GetNamingMatch(::Array<UnityEngine::Transform*>* transforms, ::Array<::Array<::Il2CppString*>*>* namings);
    // Creating initializer_list -> params proxy for: UnityEngine.Transform GetNamingMatch(UnityEngine.Transform[] transforms, params System.String[][] namings)
    static UnityEngine::Transform* GetNamingMatch(::Array<UnityEngine::Transform*>* transforms, std::initializer_list<::Array<::Il2CppString*>*> namings);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.Transform GetNamingMatch(UnityEngine.Transform[] transforms, params System.String[][] namings)
    template<class ...TParams>
    static UnityEngine::Transform* GetNamingMatch(::Array<UnityEngine::Transform*>* transforms, TParams&&... namings) {
      return GetNamingMatch(transforms, {namings...});
    }
    // static public RootMotion.BipedNaming/BoneType GetBoneType(System.String boneName)
    // Offset: 0x1CA65DC
    static RootMotion::BipedNaming::BoneType GetBoneType(::Il2CppString* boneName);
    // static public RootMotion.BipedNaming/BoneSide GetBoneSide(System.String boneName)
    // Offset: 0x1CA68DC
    static RootMotion::BipedNaming::BoneSide GetBoneSide(::Il2CppString* boneName);
    // static public UnityEngine.Transform GetBone(UnityEngine.Transform[] transforms, RootMotion.BipedNaming/BoneType boneType, RootMotion.BipedNaming/BoneSide boneSide, params System.String[][] namings)
    // Offset: 0x1CA72EC
    static UnityEngine::Transform* GetBone(::Array<UnityEngine::Transform*>* transforms, RootMotion::BipedNaming::BoneType boneType, RootMotion::BipedNaming::BoneSide boneSide, ::Array<::Array<::Il2CppString*>*>* namings);
    // Creating initializer_list -> params proxy for: UnityEngine.Transform GetBone(UnityEngine.Transform[] transforms, RootMotion.BipedNaming/BoneType boneType, RootMotion.BipedNaming/BoneSide boneSide, params System.String[][] namings)
    static UnityEngine::Transform* GetBone(::Array<UnityEngine::Transform*>* transforms, RootMotion::BipedNaming::BoneType boneType, RootMotion::BipedNaming::BoneSide boneSide, std::initializer_list<::Array<::Il2CppString*>*> namings);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.Transform GetBone(UnityEngine.Transform[] transforms, RootMotion.BipedNaming/BoneType boneType, RootMotion.BipedNaming/BoneSide boneSide, params System.String[][] namings)
    template<class ...TParams>
    static UnityEngine::Transform* GetBone(::Array<UnityEngine::Transform*>* transforms, RootMotion::BipedNaming::BoneType boneType, RootMotion::BipedNaming::BoneSide boneSide, TParams&&... namings) {
      return GetBone(transforms, boneType, boneSide, {namings...});
    }
    // static private System.Boolean isLeft(System.String boneName)
    // Offset: 0x1CA7104
    static bool isLeft(::Il2CppString* boneName);
    // static private System.Boolean isRight(System.String boneName)
    // Offset: 0x1CA71F8
    static bool isRight(::Il2CppString* boneName);
    // static private System.Boolean isSpine(System.String boneName)
    // Offset: 0x1CA6CCC
    static bool isSpine(::Il2CppString* boneName);
    // static private System.Boolean isHead(System.String boneName)
    // Offset: 0x1CA6D80
    static bool isHead(::Il2CppString* boneName);
    // static private System.Boolean isArm(System.String boneName)
    // Offset: 0x1CA6E34
    static bool isArm(::Il2CppString* boneName);
    // static private System.Boolean isLeg(System.String boneName)
    // Offset: 0x1CA6EE8
    static bool isLeg(::Il2CppString* boneName);
    // static private System.Boolean isTail(System.String boneName)
    // Offset: 0x1CA6F9C
    static bool isTail(::Il2CppString* boneName);
    // static private System.Boolean isEye(System.String boneName)
    // Offset: 0x1CA7050
    static bool isEye(::Il2CppString* boneName);
    // static private System.Boolean isTypeExclude(System.String boneName)
    // Offset: 0x1CA7500
    static bool isTypeExclude(::Il2CppString* boneName);
    // static private System.Boolean matchesNaming(System.String boneName, System.String[] namingConvention)
    // Offset: 0x1CA6BE0
    static bool matchesNaming(::Il2CppString* boneName, ::Array<::Il2CppString*>* namingConvention);
    // static private System.Boolean excludesNaming(System.String boneName, System.String[] namingConvention)
    // Offset: 0x1CA7470
    static bool excludesNaming(::Il2CppString* boneName, ::Array<::Il2CppString*>* namingConvention);
    // static private System.Boolean matchesLastLetter(System.String boneName, System.String[] namingConvention)
    // Offset: 0x1CA7570
    static bool matchesLastLetter(::Il2CppString* boneName, ::Array<::Il2CppString*>* namingConvention);
    // static private System.Boolean LastLetterIs(System.String boneName, System.String letter)
    // Offset: 0x1CA7648
    static bool LastLetterIs(::Il2CppString* boneName, ::Il2CppString* letter);
    // static private System.String firstLetter(System.String boneName)
    // Offset: 0x1CA73F4
    static ::Il2CppString* firstLetter(::Il2CppString* boneName);
    // static private System.String lastLetter(System.String boneName)
    // Offset: 0x1CA737C
    static ::Il2CppString* lastLetter(::Il2CppString* boneName);
    // static private System.Void .cctor()
    // Offset: 0x1CA7688
    static void _cctor();
  }; // RootMotion.BipedNaming
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedNaming*, "RootMotion", "BipedNaming");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedNaming::BoneType, "RootMotion", "BipedNaming/BoneType");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedNaming::BoneSide, "RootMotion", "BipedNaming/BoneSide");
// Writing includes for template specializations
// Writing MetadataGetter for method: RootMotion::BipedNaming::GetBonesOfType
// Il2CppName: GetBonesOfType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Transform*>* (*)(RootMotion::BipedNaming::BoneType, ::Array<UnityEngine::Transform*>*)>(&RootMotion::BipedNaming::GetBonesOfType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "GetBonesOfType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::BipedNaming::BoneType>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::GetBonesOfSide
// Il2CppName: GetBonesOfSide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Transform*>* (*)(RootMotion::BipedNaming::BoneSide, ::Array<UnityEngine::Transform*>*)>(&RootMotion::BipedNaming::GetBonesOfSide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "GetBonesOfSide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::BipedNaming::BoneSide>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::GetBonesOfTypeAndSide
// Il2CppName: GetBonesOfTypeAndSide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Transform*>* (*)(RootMotion::BipedNaming::BoneType, RootMotion::BipedNaming::BoneSide, ::Array<UnityEngine::Transform*>*)>(&RootMotion::BipedNaming::GetBonesOfTypeAndSide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "GetBonesOfTypeAndSide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::BipedNaming::BoneType>(), ::il2cpp_utils::ExtractIndependentType<RootMotion::BipedNaming::BoneSide>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::GetFirstBoneOfTypeAndSide
// Il2CppName: GetFirstBoneOfTypeAndSide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(RootMotion::BipedNaming::BoneType, RootMotion::BipedNaming::BoneSide, ::Array<UnityEngine::Transform*>*)>(&RootMotion::BipedNaming::GetFirstBoneOfTypeAndSide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "GetFirstBoneOfTypeAndSide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::BipedNaming::BoneType>(), ::il2cpp_utils::ExtractIndependentType<RootMotion::BipedNaming::BoneSide>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::GetNamingMatch
// Il2CppName: GetNamingMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(::Array<UnityEngine::Transform*>*, ::Array<::Array<::Il2CppString*>*>*)>(&RootMotion::BipedNaming::GetNamingMatch)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "GetNamingMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Array<::Il2CppString*>*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::GetBoneType
// Il2CppName: GetBoneType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::BipedNaming::BoneType (*)(::Il2CppString*)>(&RootMotion::BipedNaming::GetBoneType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "GetBoneType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::GetBoneSide
// Il2CppName: GetBoneSide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::BipedNaming::BoneSide (*)(::Il2CppString*)>(&RootMotion::BipedNaming::GetBoneSide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "GetBoneSide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::GetBone
// Il2CppName: GetBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(::Array<UnityEngine::Transform*>*, RootMotion::BipedNaming::BoneType, RootMotion::BipedNaming::BoneSide, ::Array<::Array<::Il2CppString*>*>*)>(&RootMotion::BipedNaming::GetBone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "GetBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>(), ::il2cpp_utils::ExtractIndependentType<RootMotion::BipedNaming::BoneType>(), ::il2cpp_utils::ExtractIndependentType<RootMotion::BipedNaming::BoneSide>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Array<::Il2CppString*>*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::isLeft
// Il2CppName: isLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&RootMotion::BipedNaming::isLeft)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "isLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::isRight
// Il2CppName: isRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&RootMotion::BipedNaming::isRight)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "isRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::isSpine
// Il2CppName: isSpine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&RootMotion::BipedNaming::isSpine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "isSpine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::isHead
// Il2CppName: isHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&RootMotion::BipedNaming::isHead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "isHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::isArm
// Il2CppName: isArm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&RootMotion::BipedNaming::isArm)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "isArm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::isLeg
// Il2CppName: isLeg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&RootMotion::BipedNaming::isLeg)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "isLeg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::isTail
// Il2CppName: isTail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&RootMotion::BipedNaming::isTail)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "isTail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::isEye
// Il2CppName: isEye
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&RootMotion::BipedNaming::isEye)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "isEye", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::isTypeExclude
// Il2CppName: isTypeExclude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&RootMotion::BipedNaming::isTypeExclude)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "isTypeExclude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::matchesNaming
// Il2CppName: matchesNaming
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Array<::Il2CppString*>*)>(&RootMotion::BipedNaming::matchesNaming)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "matchesNaming", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::excludesNaming
// Il2CppName: excludesNaming
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Array<::Il2CppString*>*)>(&RootMotion::BipedNaming::excludesNaming)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "excludesNaming", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::matchesLastLetter
// Il2CppName: matchesLastLetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Array<::Il2CppString*>*)>(&RootMotion::BipedNaming::matchesLastLetter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "matchesLastLetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::LastLetterIs
// Il2CppName: LastLetterIs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Il2CppString*)>(&RootMotion::BipedNaming::LastLetterIs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "LastLetterIs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::firstLetter
// Il2CppName: firstLetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&RootMotion::BipedNaming::firstLetter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "firstLetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::lastLetter
// Il2CppName: lastLetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&RootMotion::BipedNaming::lastLetter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), "lastLetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedNaming::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&RootMotion::BipedNaming::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedNaming*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
