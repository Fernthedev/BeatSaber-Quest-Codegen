#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__UISystemProfilerApi_def.hpp"
#include "UnityEngine/zzzz__UISystemProfilerApi_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
constexpr void UnityEngine::__UISystemProfilerApi__SampleType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::__UISystemProfilerApi__SampleType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::__UISystemProfilerApi__SampleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__UISystemProfilerApi__SampleType::__UISystemProfilerApi__SampleType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::__UISystemProfilerApi__SampleType  UnityEngine::__UISystemProfilerApi__SampleType::Layout{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::__UISystemProfilerApi__SampleType  UnityEngine::__UISystemProfilerApi__SampleType::Render{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::UISystemProfilerApi.BeginSample
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::__UISystemProfilerApi__SampleType)>(&::UnityEngine::UISystemProfilerApi::BeginSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2eab674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(),
                            "BeginSample",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__UISystemProfilerApi__SampleType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UISystemProfilerApi.EndSample
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::__UISystemProfilerApi__SampleType)>(&::UnityEngine::UISystemProfilerApi::EndSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2eab6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(),
                            "EndSample",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__UISystemProfilerApi__SampleType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UISystemProfilerApi.AddMarker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::UnityEngine::UISystemProfilerApi::AddMarker)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2eab6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(),
                            "AddMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::UISystemProfilerApi::BeginSample(::UnityEngine::__UISystemProfilerApi__SampleType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(),
                            "BeginSample",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__UISystemProfilerApi__SampleType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void UnityEngine::UISystemProfilerApi::EndSample(::UnityEngine::__UISystemProfilerApi__SampleType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(),
                            "EndSample",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__UISystemProfilerApi__SampleType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void UnityEngine::UISystemProfilerApi::AddMarker(::StringW  name, ::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(),
                            "AddMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, obj);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
