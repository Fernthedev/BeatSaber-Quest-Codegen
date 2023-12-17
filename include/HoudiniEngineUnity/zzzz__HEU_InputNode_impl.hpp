#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTilemapSettings_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputHDAInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNodeUICache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_InputNode__InputNodeType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputNode__InputNodeType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputNode__InputNodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType::__HEU_InputNode__InputNodeType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType  HoudiniEngineUnity::__HEU_InputNode__InputNodeType::CONNECTION{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType  HoudiniEngineUnity::__HEU_InputNode__InputNodeType::NODE{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType  HoudiniEngineUnity::__HEU_InputNode__InputNodeType::PARAMETER{static_cast<int32_t>(0x2)};
constexpr void HoudiniEngineUnity::__HEU_InputNode__InputObjectType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputNode__InputObjectType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputNode__InputObjectType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType::__HEU_InputNode__InputObjectType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  HoudiniEngineUnity::__HEU_InputNode__InputObjectType::HDA{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  HoudiniEngineUnity::__HEU_InputNode__InputObjectType::UNITY_MESH{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  HoudiniEngineUnity::__HEU_InputNode__InputObjectType::CURVE{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  HoudiniEngineUnity::__HEU_InputNode__InputObjectType::TERRAIN{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  HoudiniEngineUnity::__HEU_InputNode__InputObjectType::BOUNDING_BOX{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  HoudiniEngineUnity::__HEU_InputNode__InputObjectType::TILEMAP{static_cast<int32_t>(0x5)};
constexpr void HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::__HEU_InputNode__InternalObjectType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType  HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::UNKNOWN{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType  HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::HDA{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType  HoudiniEngineUnity::__HEU_InputNode__InternalObjectType::UNITY_MESH{static_cast<int32_t>(0x2)};
constexpr void HoudiniEngineUnity::__HEU_InputNode__InputActions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputNode__InputActions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputNode__InputActions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputActions::__HEU_InputNode__InputActions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputActions  HoudiniEngineUnity::__HEU_InputNode__InputActions::ACTION{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputActions  HoudiniEngineUnity::__HEU_InputNode__InputActions::DELETE{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputActions  HoudiniEngineUnity::__HEU_InputNode__InputActions::INSERT{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_InputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_InputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_InputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_ThisInputObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_ThisInputObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_ThisInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_PendingInputObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_PendingInputObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_PendingInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_PendingInputObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType)>(&::HoudiniEngineUnity::HEU_InputNode::set_PendingInputObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_PendingInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_InputObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_InputObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_InputObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_InputNodeID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_InputNodeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_InputNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_RequiresCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_RequiresCook)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_RequiresCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_RequiresCook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&::HoudiniEngineUnity::HEU_InputNode::set_RequiresCook)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216d94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_RequiresCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_RequiresUpload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_RequiresUpload)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_RequiresUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_RequiresUpload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&::HoudiniEngineUnity::HEU_InputNode::set_RequiresUpload)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216d960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_RequiresUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_InputName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_InputName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_InputName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_LabelName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_LabelName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_LabelName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_ParamName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_ParamName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_ParamName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_ParamName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::StringW)>(&::HoudiniEngineUnity::HEU_InputNode::set_ParamName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_ParamName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_KeepWorldTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_KeepWorldTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_KeepWorldTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_KeepWorldTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&::HoudiniEngineUnity::HEU_InputNode::set_KeepWorldTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216d994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_KeepWorldTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_PackGeometryBeforeMerging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_PackGeometryBeforeMerging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_PackGeometryBeforeMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.set_PackGeometryBeforeMerging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(bool)>(&::HoudiniEngineUnity::HEU_InputNode::set_PackGeometryBeforeMerging)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216d9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_PackGeometryBeforeMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_ParentAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset* (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_ParentAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_ParentAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.IsAssetInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::IsAssetInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x216d9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "IsAssetInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.get_TilemapSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::get_TilemapSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216d9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_TilemapSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.CreateSetupInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputNode* (*)(int32_t, int32_t, ::StringW, ::StringW, ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType, ::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_InputNode::CreateSetupInput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x216d9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "CreateSetupInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.SetInputNodeID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(int32_t)>(&::HoudiniEngineUnity::HEU_InputNode::SetInputNodeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216da64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "SetInputNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.DestroyAllData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::DestroyAllData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x216da6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ResetInputObjectTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::ResetInputObjectTransforms)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x216dd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ResetInputObjectTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ResetInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::ResetInputNode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x216de54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ResetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.InsertInputEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(int32_t, ::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputNode::InsertInputEntry)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x216df20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "InsertInputEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.GetInputEntryGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::HoudiniEngineUnity::HEU_InputNode::*)(int32_t)>(&::HoudiniEngineUnity::HEU_InputNode::GetInputEntryGameObject)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x216e270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "GetInputEntryGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.AddInputEntryAtEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEnd)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x216e4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "AddInputEntryAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.AddInputEntryAtEndMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputObjectInfo* (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEndMesh)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x216e6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "AddInputEntryAtEndMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.RemoveAllInputEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::RemoveAllInputEntries)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x216dcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "RemoveAllInputEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.NumInputEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::NumInputEntries)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x216e6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "NumInputEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ChangeInputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType)>(&::HoudiniEngineUnity::HEU_InputNode::ChangeInputType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x216def0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ChangeInputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ResetConnectionForForceUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::ResetConnectionForForceUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x216dea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ResetConnectionForForceUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::UploadInput)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x216ecd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadHDAInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::UploadHDAInput)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x216f0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadHDAInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadUnityInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::UploadUnityInput)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x216f294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadUnityInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.AreAnyInputHDAsConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::AreAnyInputHDAsConnected)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x216e758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "AreAnyInputHDAsConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ReconnectToUpstreamAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::ReconnectToUpstreamAsset)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x216fd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ReconnectToUpstreamAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.CreateInputObjectInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputObjectInfo* (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputNode::CreateInputObjectInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x216e198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "CreateInputObjectInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.CreateInputHDAInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputHDAInfo* (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputNode::CreateInputHDAInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x216e200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "CreateInputHDAInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.InternalAddInputObjectAtEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputObjectInfo* (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputNode::InternalAddInputObjectAtEnd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x216e538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "InternalAddInputObjectAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.InternalAddInputHDAAtEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputHDAInfo* (::HoudiniEngineUnity::HEU_InputNode::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputNode::InternalAddInputHDAAtEnd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x216e5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "InternalAddInputHDAAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.DisconnectConnectedMergeNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::DisconnectConnectedMergeNode)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x216e90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "DisconnectConnectedMergeNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ClearConnectedInputHDAs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::ClearConnectedInputHDAs)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x216eb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ClearConnectedInputHDAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ConnectToMergeObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::ConnectToMergeObject)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x216f830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ConnectToMergeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.DisconnectAndDestroyInputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::DisconnectAndDestroyInputs)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x216da90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "DisconnectAndDestroyInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.GetConnectedInputCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::GetConnectedInputCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21700a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "GetConnectedInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.GetConnectedNodeID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_InputNode::*)(int32_t)>(&::HoudiniEngineUnity::HEU_InputNode::GetConnectedNodeID)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2170128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "GetConnectedNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadObjectMergeTransformType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::UploadObjectMergeTransformType)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x216f9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadObjectMergeTransformType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadObjectMergePackGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::UploadObjectMergePackGeometry)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x216fac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadObjectMergePackGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.HasInputNodeTransformChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::HasInputNodeTransformChanged)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2170200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "HasInputNodeTransformChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UploadInputObjectTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::UploadInputObjectTransforms)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x217045c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadInputObjectTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.UpdateOnAssetRecreation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_InputNode::UpdateOnAssetRecreation)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x21705e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UpdateOnAssetRecreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.CopyInputValuesTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputNode*)>(&::HoudiniEngineUnity::HEU_InputNode::CopyInputValuesTo)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x2170750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "CopyInputValuesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.PopulateInputPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_InputPreset*)>(&::HoudiniEngineUnity::HEU_InputNode::PopulateInputPreset)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x2170bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "PopulateInputPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputPreset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.LoadPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputPreset*)>(&::HoudiniEngineUnity::HEU_InputNode::LoadPreset)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x2171144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "LoadPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputPreset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.FindAddToInputHDA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)(::StringW)>(&::HoudiniEngineUnity::HEU_InputNode::FindAddToInputHDA)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2171668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "FindAddToInputHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.NotifyParentRemovedInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::NotifyParentRemovedInput)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21717c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "NotifyParentRemovedInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.ClearUICache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::ClearUICache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216da88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ClearUICache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.HandleSelectedObjectsForInputObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>)>(&::HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputObjects)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2171848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "HandleSelectedObjectsForInputObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.HandleSelectedObjectsForInputHDAs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>)>(&::HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputHDAs)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2171964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "HandleSelectedObjectsForInputHDAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputNode::*)(::HoudiniEngineUnity::HEU_InputNode*)>(&::HoudiniEngineUnity::HEU_InputNode::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2171a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode.GetInternalObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType (*)(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType)>(&::HoudiniEngineUnity::HEU_InputNode::GetInternalObjectType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x216e178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "GetInternalObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputNode::*)()>(&::HoudiniEngineUnity::HEU_InputNode::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2171e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputNode*>"
constexpr  HoudiniEngineUnity::HEU_InputNode::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputNode*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputNode*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputNodeType(::HoudiniEngineUnity::__HEU_InputNode__InputNodeType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType, 0x18>(this, std::forward<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType& HoudiniEngineUnity::HEU_InputNode::__get__inputNodeType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType, 0x18>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType const& HoudiniEngineUnity::HEU_InputNode::__get__inputNodeType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, 0x1c>(this, std::forward<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType& HoudiniEngineUnity::HEU_InputNode::__get__inputObjectType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, 0x1c>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const& HoudiniEngineUnity::HEU_InputNode::__get__inputObjectType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, 0x1c>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__pendingInputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, 0x20>(this, std::forward<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType& HoudiniEngineUnity::HEU_InputNode::__get__pendingInputObjectType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, 0x20>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType const& HoudiniEngineUnity::HEU_InputNode::__get__pendingInputObjectType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputObjects(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* HoudiniEngineUnity::HEU_InputNode::__get__inputObjects()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*> HoudiniEngineUnity::HEU_InputNode::__get__inputObjects() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputObjectsConnectedAssetIDs(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t>* HoudiniEngineUnity::HEU_InputNode::__get__inputObjectsConnectedAssetIDs()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> HoudiniEngineUnity::HEU_InputNode::__get__inputObjectsConnectedAssetIDs() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputAsset(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x38>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_InputNode::__get__inputAsset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> HoudiniEngineUnity::HEU_InputNode::__get__inputAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__connectedInputAsset(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x40>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_InputNode::__get__connectedInputAsset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> HoudiniEngineUnity::HEU_InputNode::__get__connectedInputAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputAssetInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*, 0x48>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* HoudiniEngineUnity::HEU_InputNode::__get__inputAssetInfos()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*> HoudiniEngineUnity::HEU_InputNode::__get__inputAssetInfos() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__nodeID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputNode::__get__nodeID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputNode::__get__nodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputNode::__get__inputIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputNode::__get__inputIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__requiresCook(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_InputNode::__get__requiresCook()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_InputNode::__get__requiresCook() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__requiresUpload(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_InputNode::__get__requiresUpload()  {
return ::cordl_internals::getInstanceField<bool, 0x59>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_InputNode::__get__requiresUpload() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__inputName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_InputNode::__get__inputName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputNode::__get__inputName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__labelName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_InputNode::__get__labelName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputNode::__get__labelName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__paramName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_InputNode::__get__paramName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputNode::__get__paramName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__connectedNodeID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputNode::__get__connectedNodeID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputNode::__get__connectedNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__keepWorldTransform(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_InputNode::__get__keepWorldTransform()  {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_InputNode::__get__keepWorldTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__packGeometryBeforeMerging(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x7d>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_InputNode::__get__packGeometryBeforeMerging()  {
return ::cordl_internals::getInstanceField<bool, 0x7d>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_InputNode::__get__packGeometryBeforeMerging() const {
return ::cordl_internals::getInstanceField<bool, 0x7d>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__parentAsset(::HoudiniEngineUnity::HEU_HoudiniAsset*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x80>(this, std::forward<::HoudiniEngineUnity::HEU_HoudiniAsset*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_InputNode::__get__parentAsset()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> HoudiniEngineUnity::HEU_InputNode::__get__parentAsset() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HoudiniAsset*, 0x80>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__tilemapSettings(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*, 0x88>(this, std::forward<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* HoudiniEngineUnity::HEU_InputNode::__get__tilemapSettings()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*> HoudiniEngineUnity::HEU_InputNode::__get__tilemapSettings() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*, 0x88>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputNode::__set__uiCache(::HoudiniEngineUnity::HEU_InputNodeUICache*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_InputNodeUICache*, 0x90>(this, std::forward<::HoudiniEngineUnity::HEU_InputNodeUICache*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_InputNodeUICache* HoudiniEngineUnity::HEU_InputNode::__get__uiCache()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_InputNodeUICache*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InputNodeUICache*> HoudiniEngineUnity::HEU_InputNode::__get__uiCache() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_InputNodeUICache*, 0x90>(this);
}
inline ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType HoudiniEngineUnity::HEU_InputNode::get_InputType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_InputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType HoudiniEngineUnity::HEU_InputNode::get_ThisInputObjectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_ThisInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType HoudiniEngineUnity::HEU_InputNode::get_PendingInputObjectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_PendingInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_PendingInputObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_PendingInputObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* HoudiniEngineUnity::HEU_InputNode::get_InputObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_InputObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_InputNode::get_InputNodeID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_InputNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_InputNode::get_RequiresCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_RequiresCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_RequiresCook(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_RequiresCook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_InputNode::get_RequiresUpload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_RequiresUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_RequiresUpload(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_RequiresUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW HoudiniEngineUnity::HEU_InputNode::get_InputName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_InputName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_InputNode::get_LabelName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_LabelName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_InputNode::get_ParamName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_ParamName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_ParamName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_ParamName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_InputNode::get_KeepWorldTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_KeepWorldTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_KeepWorldTransform(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_KeepWorldTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_InputNode::get_PackGeometryBeforeMerging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_PackGeometryBeforeMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::set_PackGeometryBeforeMerging(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "set_PackGeometryBeforeMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_InputNode::get_ParentAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_ParentAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset*, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_InputNode::IsAssetInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "IsAssetInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* HoudiniEngineUnity::HEU_InputNode::get_TilemapSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "get_TilemapSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_InputNode* HoudiniEngineUnity::HEU_InputNode::CreateSetupInput(int32_t  nodeID, int32_t  inputIndex, ::StringW  inputName, ::StringW  labelName, ::HoudiniEngineUnity::__HEU_InputNode__InputNodeType  inputNodeType, ::HoudiniEngineUnity::HEU_HoudiniAsset*  parentAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "CreateSetupInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputNodeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputNode*, false>(nullptr, ___internal_method, nodeID, inputIndex, inputName, labelName, inputNodeType, parentAsset);
}
inline void HoudiniEngineUnity::HEU_InputNode::SetInputNodeID(int32_t  nodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "SetInputNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, nodeID);
}
inline void HoudiniEngineUnity::HEU_InputNode::DestroyAllData(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::ResetInputObjectTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ResetInputObjectTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::ResetInputNode(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ResetInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::InsertInputEntry(int32_t  index, ::UnityEngine::GameObject*  newInputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "InsertInputEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, newInputGameObject);
}
inline ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_InputNode::GetInputEntryGameObject(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "GetInputEntryGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method, index);
}
inline void HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEnd(::UnityEngine::GameObject*  newEntryGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "AddInputEntryAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newEntryGameObject);
}
inline ::HoudiniEngineUnity::HEU_InputObjectInfo* HoudiniEngineUnity::HEU_InputNode::AddInputEntryAtEndMesh(::UnityEngine::GameObject*  newEntryGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "AddInputEntryAtEndMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputObjectInfo*, false>(*this, ___internal_method, newEntryGameObject);
}
inline void HoudiniEngineUnity::HEU_InputNode::RemoveAllInputEntries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "RemoveAllInputEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_InputNode::NumInputEntries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "NumInputEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::ChangeInputType(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  newType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ChangeInputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, newType);
}
inline void HoudiniEngineUnity::HEU_InputNode::ResetConnectionForForceUpdate(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ResetConnectionForForceUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::UploadInput(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::UploadHDAInput(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadHDAInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::UploadUnityInput(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadUnityInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_InputNode::AreAnyInputHDAsConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "AreAnyInputHDAsConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::ReconnectToUpstreamAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ReconnectToUpstreamAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_InputObjectInfo* HoudiniEngineUnity::HEU_InputNode::CreateInputObjectInfo(::UnityEngine::GameObject*  inputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "CreateInputObjectInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputObjectInfo*, false>(*this, ___internal_method, inputGameObject);
}
inline ::HoudiniEngineUnity::HEU_InputHDAInfo* HoudiniEngineUnity::HEU_InputNode::CreateInputHDAInfo(::UnityEngine::GameObject*  inputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "CreateInputHDAInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputHDAInfo*, false>(*this, ___internal_method, inputGameObject);
}
inline ::HoudiniEngineUnity::HEU_InputObjectInfo* HoudiniEngineUnity::HEU_InputNode::InternalAddInputObjectAtEnd(::UnityEngine::GameObject*  newInputGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "InternalAddInputObjectAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputObjectInfo*, false>(*this, ___internal_method, newInputGameObject);
}
inline ::HoudiniEngineUnity::HEU_InputHDAInfo* HoudiniEngineUnity::HEU_InputNode::InternalAddInputHDAAtEnd(::UnityEngine::GameObject*  newInputHDA)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "InternalAddInputHDAAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_InputHDAInfo*, false>(*this, ___internal_method, newInputHDA);
}
inline void HoudiniEngineUnity::HEU_InputNode::DisconnectConnectedMergeNode(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "DisconnectConnectedMergeNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::ClearConnectedInputHDAs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ClearConnectedInputHDAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::ConnectToMergeObject(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ConnectToMergeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::DisconnectAndDestroyInputs(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "DisconnectAndDestroyInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline int32_t HoudiniEngineUnity::HEU_InputNode::GetConnectedInputCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "GetConnectedInputCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_InputNode::GetConnectedNodeID(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "GetConnectedNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index);
}
inline bool HoudiniEngineUnity::HEU_InputNode::UploadObjectMergeTransformType(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadObjectMergeTransformType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_InputNode::UploadObjectMergePackGeometry(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadObjectMergePackGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session);
}
inline bool HoudiniEngineUnity::HEU_InputNode::HasInputNodeTransformChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "HasInputNodeTransformChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::UploadInputObjectTransforms(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UploadInputObjectTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::UpdateOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "UpdateOnAssetRecreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_InputNode::CopyInputValuesTo(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_InputNode*  destInputNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "CopyInputValuesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, destInputNode);
}
inline void HoudiniEngineUnity::HEU_InputNode::PopulateInputPreset(::HoudiniEngineUnity::HEU_InputPreset*  inputPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "PopulateInputPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputPreset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inputPreset);
}
inline void HoudiniEngineUnity::HEU_InputNode::LoadPreset(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_InputPreset*  inputPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "LoadPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputPreset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, inputPreset);
}
inline bool HoudiniEngineUnity::HEU_InputNode::FindAddToInputHDA(::StringW  gameObjectName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "FindAddToInputHDA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, gameObjectName);
}
inline void HoudiniEngineUnity::HEU_InputNode::NotifyParentRemovedInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "NotifyParentRemovedInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::ClearUICache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "ClearUICache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputObjects(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  selectedObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "HandleSelectedObjectsForInputObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectedObjects);
}
inline void HoudiniEngineUnity::HEU_InputNode::HandleSelectedObjectsForInputHDAs(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  selectedObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "HandleSelectedObjectsForInputHDAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectedObjects);
}
inline bool HoudiniEngineUnity::HEU_InputNode::IsEquivalentTo(::HoudiniEngineUnity::HEU_InputNode*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType HoudiniEngineUnity::HEU_InputNode::GetInternalObjectType(::HoudiniEngineUnity::__HEU_InputNode__InputObjectType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            "GetInternalObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputNode__InputObjectType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputNode__InternalObjectType, false>(nullptr, ___internal_method, type);
}
inline ::HoudiniEngineUnity::HEU_InputNode* HoudiniEngineUnity::HEU_InputNode::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_InputNode*>());
}
inline void HoudiniEngineUnity::HEU_InputNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
