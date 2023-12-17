#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Handle_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_HandleInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HandleParamBinding_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_XYZOrder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Handle_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_Handle__HEU_HandleType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_Handle__HEU_HandleType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_Handle__HEU_HandleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType::__HEU_Handle__HEU_HandleType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType  HoudiniEngineUnity::__HEU_Handle__HEU_HandleType::XFORM{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType  HoudiniEngineUnity::__HEU_Handle__HEU_HandleType::UNSUPPORTED{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_HandleName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::get_HandleName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218fe80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_HandleName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_HandleType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::get_HandleType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218fe88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_HandleType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_RSTOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_RSTOrder (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::get_RSTOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218fe90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_RSTOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_XYZOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_XYZOrder (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::get_XYZOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218fe98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_XYZOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_ConvertedTransformEuler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_TransformEuler (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::get_ConvertedTransformEuler)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x218fea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_ConvertedTransformEuler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.HasTranslateHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::HasTranslateHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x218feb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "HasTranslateHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.HasRotateHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::HasRotateHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x218fec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "HasRotateHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.HasScaleHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::HasScaleHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x218fed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "HasScaleHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.IsTranslateHandleDisabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::IsTranslateHandleDisabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x218fee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "IsTranslateHandleDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.IsRotateHandleDisabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::IsRotateHandleDisabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x218ff04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "IsRotateHandleDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.IsScaleHandleDisabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::IsScaleHandleDisabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x218ff24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "IsScaleHandleDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GetTranslateBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HandleParamBinding* (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::GetTranslateBinding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218ff44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GetTranslateBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GetRotateBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HandleParamBinding* (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::GetRotateBinding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218ff4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GetRotateBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GetScaleBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HandleParamBinding* (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::GetScaleBinding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218ff54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GetScaleBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_HandlePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::get_HandlePosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x218ff5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_HandlePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_HandleRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::get_HandleRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x218ff68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_HandleRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.get_HandleScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::get_HandleScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x218ff74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_HandleScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.SetupHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType, ByRef<::HoudiniEngineUnity::HAPI_HandleInfo>, ::HoudiniEngineUnity::HEU_Parameters*)>(&::HoudiniEngineUnity::HEU_Handle::SetupHandle)> {
  constexpr static std::size_t size = 0x7cc;
  constexpr static std::size_t addrs = 0x218ff80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "SetupHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_HandleInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Parameters*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.CleanUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::CleanUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2190e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "CleanUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GenerateTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_Parameters*)>(&::HoudiniEngineUnity::HEU_Handle::GenerateTransform)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x2190994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GenerateTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Parameters*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GetUpdatedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ByRef<::UnityEngine::Vector3>)>(&::HoudiniEngineUnity::HEU_Handle::GetUpdatedPosition)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2190ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GetUpdatedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.GetUpdatedRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ByRef<::UnityEngine::Quaternion>)>(&::HoudiniEngineUnity::HEU_Handle::GetUpdatedRotation)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2191004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GetUpdatedRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.IsSpecialRSTOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HAPI_RSTOrder)>(&::HoudiniEngineUnity::HEU_Handle::IsSpecialRSTOrder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2190e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "IsSpecialRSTOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_RSTOrder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Handle::*)(::HoudiniEngineUnity::HEU_Handle*)>(&::HoudiniEngineUnity::HEU_Handle::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x2191200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Handle*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Handle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Handle::*)()>(&::HoudiniEngineUnity::HEU_Handle::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21916fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle*>"
constexpr  HoudiniEngineUnity::HEU_Handle::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__handleName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_Handle::__get__handleName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_Handle::__get__handleName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__handleType(::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType, 0x20>(this, std::forward<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType& HoudiniEngineUnity::HEU_Handle::__get__handleType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType, 0x20>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType const& HoudiniEngineUnity::HEU_Handle::__get__handleType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__handleIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_Handle::__get__handleIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_Handle::__get__handleIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__handleParamTranslateBinding(::HoudiniEngineUnity::HEU_HandleParamBinding*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_HandleParamBinding*, 0x28>(this, std::forward<::HoudiniEngineUnity::HEU_HandleParamBinding*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_Handle::__get__handleParamTranslateBinding()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HandleParamBinding*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HandleParamBinding*> HoudiniEngineUnity::HEU_Handle::__get__handleParamTranslateBinding() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HandleParamBinding*, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__handleParamRotateBinding(::HoudiniEngineUnity::HEU_HandleParamBinding*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_HandleParamBinding*, 0x30>(this, std::forward<::HoudiniEngineUnity::HEU_HandleParamBinding*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_Handle::__get__handleParamRotateBinding()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HandleParamBinding*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HandleParamBinding*> HoudiniEngineUnity::HEU_Handle::__get__handleParamRotateBinding() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HandleParamBinding*, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__handleParamScaleBinding(::HoudiniEngineUnity::HEU_HandleParamBinding*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_HandleParamBinding*, 0x38>(this, std::forward<::HoudiniEngineUnity::HEU_HandleParamBinding*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_Handle::__get__handleParamScaleBinding()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HandleParamBinding*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HandleParamBinding*> HoudiniEngineUnity::HEU_Handle::__get__handleParamScaleBinding() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_HandleParamBinding*, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__handlePosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x40>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_Handle::__get__handlePosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_Handle::__get__handlePosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__handleRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x4c>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& HoudiniEngineUnity::HEU_Handle::__get__handleRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x4c>(this);
}
constexpr ::UnityEngine::Quaternion const& HoudiniEngineUnity::HEU_Handle::__get__handleRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x4c>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__handleScale(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x5c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_Handle::__get__handleScale()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x5c>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_Handle::__get__handleScale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x5c>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__rstOrder(::HoudiniEngineUnity::HAPI_RSTOrder  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_RSTOrder, 0x68>(this, std::forward<::HoudiniEngineUnity::HAPI_RSTOrder>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder& HoudiniEngineUnity::HEU_Handle::__get__rstOrder()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_RSTOrder, 0x68>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder const& HoudiniEngineUnity::HEU_Handle::__get__rstOrder() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_RSTOrder, 0x68>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__xyzOrder(::HoudiniEngineUnity::HAPI_XYZOrder  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_XYZOrder, 0x6c>(this, std::forward<::HoudiniEngineUnity::HAPI_XYZOrder>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder& HoudiniEngineUnity::HEU_Handle::__get__xyzOrder()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_XYZOrder, 0x6c>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder const& HoudiniEngineUnity::HEU_Handle::__get__xyzOrder() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_XYZOrder, 0x6c>(this);
}
constexpr void HoudiniEngineUnity::HEU_Handle::__set__convertedTransformEuler(::HoudiniEngineUnity::HAPI_TransformEuler  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_TransformEuler, 0x70>(this, std::forward<::HoudiniEngineUnity::HAPI_TransformEuler>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_TransformEuler& HoudiniEngineUnity::HEU_Handle::__get__convertedTransformEuler()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_TransformEuler, 0x70>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_TransformEuler const& HoudiniEngineUnity::HEU_Handle::__get__convertedTransformEuler() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_TransformEuler, 0x70>(this);
}
inline ::StringW HoudiniEngineUnity::HEU_Handle::get_HandleName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_HandleName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType HoudiniEngineUnity::HEU_Handle::get_HandleType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_HandleType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_RSTOrder HoudiniEngineUnity::HEU_Handle::get_RSTOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_RSTOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_RSTOrder, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_XYZOrder HoudiniEngineUnity::HEU_Handle::get_XYZOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_XYZOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_XYZOrder, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_TransformEuler HoudiniEngineUnity::HEU_Handle::get_ConvertedTransformEuler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_ConvertedTransformEuler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_TransformEuler, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::HasTranslateHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "HasTranslateHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::HasRotateHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "HasRotateHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::HasScaleHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "HasScaleHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::IsTranslateHandleDisabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "IsTranslateHandleDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::IsRotateHandleDisabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "IsRotateHandleDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::IsScaleHandleDisabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "IsScaleHandleDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_Handle::GetTranslateBinding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GetTranslateBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HandleParamBinding*, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_Handle::GetRotateBinding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GetRotateBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HandleParamBinding*, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_Handle::GetScaleBinding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GetScaleBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HandleParamBinding*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::HEU_Handle::get_HandlePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_HandlePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion HoudiniEngineUnity::HEU_Handle::get_HandleRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_HandleRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::HEU_Handle::get_HandleScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "get_HandleScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Handle::SetupHandle(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  assetID, int32_t  handleIndex, ::StringW  handleName, ::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType  handleType, ByRef<::HoudiniEngineUnity::HAPI_HandleInfo>  handleInfo, ::HoudiniEngineUnity::HEU_Parameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "SetupHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Handle__HEU_HandleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_HandleInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Parameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session, assetID, handleIndex, handleName, handleType, handleInfo, parameters);
}
inline void HoudiniEngineUnity::HEU_Handle::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "CleanUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Handle::GenerateTransform(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_Parameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GenerateTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Parameters*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, parameters);
}
inline bool HoudiniEngineUnity::HEU_Handle::GetUpdatedPosition(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ByRef<::UnityEngine::Vector3>  inPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GetUpdatedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, asset, inPosition);
}
inline bool HoudiniEngineUnity::HEU_Handle::GetUpdatedRotation(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ByRef<::UnityEngine::Quaternion>  inRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "GetUpdatedRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, asset, inRotation);
}
inline bool HoudiniEngineUnity::HEU_Handle::IsSpecialRSTOrder(::HoudiniEngineUnity::HAPI_RSTOrder  rstOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "IsSpecialRSTOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_RSTOrder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rstOrder);
}
inline bool HoudiniEngineUnity::HEU_Handle::IsEquivalentTo(::HoudiniEngineUnity::HEU_Handle*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Handle*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_Handle* HoudiniEngineUnity::HEU_Handle::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_Handle*>());
}
inline void HoudiniEngineUnity::HEU_Handle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Handle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
