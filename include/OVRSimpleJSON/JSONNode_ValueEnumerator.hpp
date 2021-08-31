// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRSimpleJSON.JSONNode/OVRSimpleJSON.ValueEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  struct JSONNode::ValueEnumerator/*, public System::ValueType*/ {
    public:
    // private OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator m_Enumerator
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    OVRSimpleJSON::JSONNode::Enumerator m_Enumerator;
    // Creating value type constructor for type: ValueEnumerator
    constexpr ValueEnumerator(OVRSimpleJSON::JSONNode::Enumerator m_Enumerator_ = {}) noexcept : m_Enumerator{m_Enumerator_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator OVRSimpleJSON::JSONNode::Enumerator
    constexpr operator OVRSimpleJSON::JSONNode::Enumerator() const noexcept {
      return m_Enumerator;
    }
    // Get instance field reference: private OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator m_Enumerator
    OVRSimpleJSON::JSONNode::Enumerator& dyn_m_Enumerator();
    // public OVRSimpleJSON.JSONNode get_Current()
    // Offset: 0x1F43CE8
    OVRSimpleJSON::JSONNode* get_Current();
    // public System.Void .ctor(System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<OVRSimpleJSON.JSONNode> aArrayEnum)
    // Offset: 0x1F43C3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ValueEnumerator(typename System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>::Enumerator aArrayEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNode::ValueEnumerator::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aArrayEnum)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, aArrayEnum);
    }
    // public System.Void .ctor(System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,OVRSimpleJSON.JSONNode> aDictEnum)
    // Offset: 0x1F43C84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ValueEnumerator(typename System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>::Enumerator aDictEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNode::ValueEnumerator::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aDictEnum)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, aDictEnum);
    }
    // public System.Void .ctor(OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator aEnumerator)
    // Offset: 0x1F43CD0
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  ValueEnumerator(OVRSimpleJSON::JSONNode::Enumerator aEnumerator)
    // public System.Boolean MoveNext()
    // Offset: 0x1F43D34
    bool MoveNext();
    // public OVRSimpleJSON.JSONNode/OVRSimpleJSON.ValueEnumerator GetEnumerator()
    // Offset: 0x1F43D38
    OVRSimpleJSON::JSONNode::ValueEnumerator GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/OVRSimpleJSON.ValueEnumerator
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::ValueEnumerator, "OVRSimpleJSON", "JSONNode/ValueEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONNode::ValueEnumerator::*)()>(&OVRSimpleJSON::JSONNode::ValueEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::ValueEnumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::ValueEnumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::ValueEnumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::ValueEnumerator
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::ValueEnumerator::*)()>(&OVRSimpleJSON::JSONNode::ValueEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::ValueEnumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode::ValueEnumerator (OVRSimpleJSON::JSONNode::ValueEnumerator::*)()>(&OVRSimpleJSON::JSONNode::ValueEnumerator::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::ValueEnumerator), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
