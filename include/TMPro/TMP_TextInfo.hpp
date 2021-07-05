// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_CharacterInfo
#include "TMPro/TMP_CharacterInfo.hpp"
// Including type: TMPro.TMP_WordInfo
#include "TMPro/TMP_WordInfo.hpp"
// Including type: TMPro.TMP_LinkInfo
#include "TMPro/TMP_LinkInfo.hpp"
// Including type: TMPro.TMP_LineInfo
#include "TMPro/TMP_LineInfo.hpp"
// Including type: TMPro.TMP_PageInfo
#include "TMPro/TMP_PageInfo.hpp"
// Including type: TMPro.TMP_MeshInfo
#include "TMPro/TMP_MeshInfo.hpp"
// Including type: TMPro.MaterialReference
#include "TMPro/MaterialReference.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_TextInfo
  class TMP_TextInfo : public ::Il2CppObject {
    public:
    // public TMPro.TMP_Text textComponent
    // Size: 0x8
    // Offset: 0x10
    TMPro::TMP_Text* textComponent;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Text*) == 0x8);
    // public System.Int32 characterCount
    // Size: 0x4
    // Offset: 0x18
    int characterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 spriteCount
    // Size: 0x4
    // Offset: 0x1C
    int spriteCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 spaceCount
    // Size: 0x4
    // Offset: 0x20
    int spaceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 wordCount
    // Size: 0x4
    // Offset: 0x24
    int wordCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 linkCount
    // Size: 0x4
    // Offset: 0x28
    int linkCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lineCount
    // Size: 0x4
    // Offset: 0x2C
    int lineCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 pageCount
    // Size: 0x4
    // Offset: 0x30
    int pageCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 materialCount
    // Size: 0x4
    // Offset: 0x34
    int materialCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.TMP_CharacterInfo[] characterInfo
    // Size: 0x8
    // Offset: 0x38
    ::Array<TMPro::TMP_CharacterInfo>* characterInfo;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_CharacterInfo>*) == 0x8);
    // public TMPro.TMP_WordInfo[] wordInfo
    // Size: 0x8
    // Offset: 0x40
    ::Array<TMPro::TMP_WordInfo>* wordInfo;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_WordInfo>*) == 0x8);
    // public TMPro.TMP_LinkInfo[] linkInfo
    // Size: 0x8
    // Offset: 0x48
    ::Array<TMPro::TMP_LinkInfo>* linkInfo;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_LinkInfo>*) == 0x8);
    // public TMPro.TMP_LineInfo[] lineInfo
    // Size: 0x8
    // Offset: 0x50
    ::Array<TMPro::TMP_LineInfo>* lineInfo;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_LineInfo>*) == 0x8);
    // public TMPro.TMP_PageInfo[] pageInfo
    // Size: 0x8
    // Offset: 0x58
    ::Array<TMPro::TMP_PageInfo>* pageInfo;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_PageInfo>*) == 0x8);
    // public TMPro.TMP_MeshInfo[] meshInfo
    // Size: 0x8
    // Offset: 0x60
    ::Array<TMPro::TMP_MeshInfo>* meshInfo;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_MeshInfo>*) == 0x8);
    // private TMPro.TMP_MeshInfo[] m_CachedMeshInfo
    // Size: 0x8
    // Offset: 0x68
    ::Array<TMPro::TMP_MeshInfo>* m_CachedMeshInfo;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_MeshInfo>*) == 0x8);
    // Creating value type constructor for type: TMP_TextInfo
    TMP_TextInfo(TMPro::TMP_Text* textComponent_ = {}, int characterCount_ = {}, int spriteCount_ = {}, int spaceCount_ = {}, int wordCount_ = {}, int linkCount_ = {}, int lineCount_ = {}, int pageCount_ = {}, int materialCount_ = {}, ::Array<TMPro::TMP_CharacterInfo>* characterInfo_ = {}, ::Array<TMPro::TMP_WordInfo>* wordInfo_ = {}, ::Array<TMPro::TMP_LinkInfo>* linkInfo_ = {}, ::Array<TMPro::TMP_LineInfo>* lineInfo_ = {}, ::Array<TMPro::TMP_PageInfo>* pageInfo_ = {}, ::Array<TMPro::TMP_MeshInfo>* meshInfo_ = {}, ::Array<TMPro::TMP_MeshInfo>* m_CachedMeshInfo_ = {}) noexcept : textComponent{textComponent_}, characterCount{characterCount_}, spriteCount{spriteCount_}, spaceCount{spaceCount_}, wordCount{wordCount_}, linkCount{linkCount_}, lineCount{lineCount_}, pageCount{pageCount_}, materialCount{materialCount_}, characterInfo{characterInfo_}, wordInfo{wordInfo_}, linkInfo{linkInfo_}, lineInfo{lineInfo_}, pageInfo{pageInfo_}, meshInfo{meshInfo_}, m_CachedMeshInfo{m_CachedMeshInfo_} {}
    // Get static field: static private UnityEngine.Vector2 k_InfinityVectorPositive
    static UnityEngine::Vector2 _get_k_InfinityVectorPositive();
    // Set static field: static private UnityEngine.Vector2 k_InfinityVectorPositive
    static void _set_k_InfinityVectorPositive(UnityEngine::Vector2 value);
    // Get static field: static private UnityEngine.Vector2 k_InfinityVectorNegative
    static UnityEngine::Vector2 _get_k_InfinityVectorNegative();
    // Set static field: static private UnityEngine.Vector2 k_InfinityVectorNegative
    static void _set_k_InfinityVectorNegative(UnityEngine::Vector2 value);
    // public System.Void .ctor(TMPro.TMP_Text textComponent)
    // Offset: 0x13FAFBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_TextInfo* New_ctor(TMPro::TMP_Text* textComponent) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_TextInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_TextInfo*, creationType>(textComponent)));
    }
    // public System.Void Clear()
    // Offset: 0x13FB0EC
    void Clear();
    // public System.Void ClearMeshInfo(System.Boolean updateMesh)
    // Offset: 0x13FB150
    void ClearMeshInfo(bool updateMesh);
    // public System.Void ClearAllMeshInfo()
    // Offset: 0x13FB1D0
    void ClearAllMeshInfo();
    // public System.Void ResetVertexLayout(System.Boolean isVolumetric)
    // Offset: 0x13FB24C
    void ResetVertexLayout(bool isVolumetric);
    // public System.Void ClearUnusedVertices(TMPro.MaterialReference[] materials)
    // Offset: 0x13FB2D0
    void ClearUnusedVertices(::Array<TMPro::MaterialReference>* materials);
    // public System.Void ClearLineInfo()
    // Offset: 0x13FB34C
    void ClearLineInfo();
    // public TMPro.TMP_MeshInfo[] CopyMeshInfoVertexData()
    // Offset: 0x13FB54C
    ::Array<TMPro::TMP_MeshInfo>* CopyMeshInfoVertexData();
    // static public System.Void Resize(ref T[] array, System.Int32 size)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void Resize(::Array<T>*& array, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_TextInfo::Resize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("TMPro", "TMP_TextInfo", "Resize", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(size)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, array, size);
    }
    // static public System.Void Resize(ref T[] array, System.Int32 size, System.Boolean isBlockAllocated)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void Resize(::Array<T>*& array, int size, bool isBlockAllocated) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_TextInfo::Resize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("TMPro", "TMP_TextInfo", "Resize", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(size), ::il2cpp_utils::ExtractType(isBlockAllocated)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, array, size, isBlockAllocated);
    }
    // static private System.Void .cctor()
    // Offset: 0x13FB918
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x13FAEE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_TextInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_TextInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_TextInfo*, creationType>()));
    }
  }; // TMPro.TMP_TextInfo
  #pragma pack(pop)
  static check_size<sizeof(TMP_TextInfo), 104 + sizeof(::Array<TMPro::TMP_MeshInfo>*)> __TMPro_TMP_TextInfoSizeCheck;
  static_assert(sizeof(TMP_TextInfo) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextInfo*, "TMPro", "TMP_TextInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_TextInfo::*)()>(&TMPro::TMP_TextInfo::Clear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextInfo*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::ClearMeshInfo
// Il2CppName: ClearMeshInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_TextInfo::*)(bool)>(&TMPro::TMP_TextInfo::ClearMeshInfo)> {
  const MethodInfo* get() {
    static auto* updateMesh = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextInfo*), "ClearMeshInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateMesh});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::ClearAllMeshInfo
// Il2CppName: ClearAllMeshInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_TextInfo::*)()>(&TMPro::TMP_TextInfo::ClearAllMeshInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextInfo*), "ClearAllMeshInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::ResetVertexLayout
// Il2CppName: ResetVertexLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_TextInfo::*)(bool)>(&TMPro::TMP_TextInfo::ResetVertexLayout)> {
  const MethodInfo* get() {
    static auto* isVolumetric = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextInfo*), "ResetVertexLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isVolumetric});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::ClearUnusedVertices
// Il2CppName: ClearUnusedVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_TextInfo::*)(::Array<TMPro::MaterialReference>*)>(&TMPro::TMP_TextInfo::ClearUnusedVertices)> {
  const MethodInfo* get() {
    static auto* materials = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("TMPro", "MaterialReference"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextInfo*), "ClearUnusedVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materials});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::ClearLineInfo
// Il2CppName: ClearLineInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_TextInfo::*)()>(&TMPro::TMP_TextInfo::ClearLineInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextInfo*), "ClearLineInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::CopyMeshInfoVertexData
// Il2CppName: CopyMeshInfoVertexData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<TMPro::TMP_MeshInfo>* (TMPro::TMP_TextInfo::*)()>(&TMPro::TMP_TextInfo::CopyMeshInfoVertexData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextInfo*), "CopyMeshInfoVertexData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::Resize
// Il2CppName: Resize
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::Resize
// Il2CppName: Resize
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_TextInfo::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
