// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.HashUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class HashUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HashUtility
    HashUtility() noexcept {}
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2)
    // Offset: 0x181DEB0
    static int CombineHash(int h1, int h2);
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2, System.Int32 h3)
    // Offset: 0x1828098
    static int CombineHash(int h1, int h2, int h3);
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4)
    // Offset: 0x18280C4
    static int CombineHash(int h1, int h2, int h3, int h4);
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4, System.Int32 h5)
    // Offset: 0x1828100
    static int CombineHash(int h1, int h2, int h3, int h4, int h5);
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4, System.Int32 h5, System.Int32 h6)
    // Offset: 0x182814C
    static int CombineHash(int h1, int h2, int h3, int h4, int h5, int h6);
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4, System.Int32 h5, System.Int32 h6, System.Int32 h7)
    // Offset: 0x18281A8
    static int CombineHash(int h1, int h2, int h3, int h4, int h5, int h6, int h7);
    // static public System.Int32 CombineHash(System.Int32[] hashes)
    // Offset: 0x18281E0
    static int CombineHash(::Array<int>* hashes);
  }; // UnityEngine.Timeline.HashUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::HashUtility*, "UnityEngine.Timeline", "HashUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::HashUtility::CombineHash
// Il2CppName: CombineHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&UnityEngine::Timeline::HashUtility::CombineHash)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::HashUtility*), "CombineHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::HashUtility::CombineHash
// Il2CppName: CombineHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int)>(&UnityEngine::Timeline::HashUtility::CombineHash)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::HashUtility*), "CombineHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::HashUtility::CombineHash
// Il2CppName: CombineHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int, int)>(&UnityEngine::Timeline::HashUtility::CombineHash)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::HashUtility*), "CombineHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3, h4});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::HashUtility::CombineHash
// Il2CppName: CombineHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int, int, int)>(&UnityEngine::Timeline::HashUtility::CombineHash)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h5 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::HashUtility*), "CombineHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3, h4, h5});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::HashUtility::CombineHash
// Il2CppName: CombineHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int, int, int, int)>(&UnityEngine::Timeline::HashUtility::CombineHash)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h5 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h6 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::HashUtility*), "CombineHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3, h4, h5, h6});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::HashUtility::CombineHash
// Il2CppName: CombineHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int, int, int, int, int)>(&UnityEngine::Timeline::HashUtility::CombineHash)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h5 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h6 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h7 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::HashUtility*), "CombineHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3, h4, h5, h6, h7});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::HashUtility::CombineHash
// Il2CppName: CombineHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<int>*)>(&UnityEngine::Timeline::HashUtility::CombineHash)> {
  static const MethodInfo* get() {
    static auto* hashes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::HashUtility*), "CombineHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashes});
  }
};
