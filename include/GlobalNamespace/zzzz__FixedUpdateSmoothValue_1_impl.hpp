#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::*)(float_t)>(&::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>.SetStartValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::SetStartValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                            "SetStartValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::FixedUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::*)(float_t)>(&::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>.Interpolate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::Interpolate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::__set__currentSmoothedValue(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::__get__currentSmoothedValue()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::__get__currentSmoothedValue() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::__set__prevSmoothedValue(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x1c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::__get__prevSmoothedValue()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x1c>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::__get__prevSmoothedValue() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x1c>(this);
}
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::__set__smooth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::__get__smooth()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::__get__smooth() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
inline ::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>* GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::New_ctor(float_t  smooth)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>(smooth));
}
inline void GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::_ctor(float_t  smooth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, smooth);
}
inline void GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::SetStartValue(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                            "SetStartValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::FixedUpdate(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::GetValue(float_t  interpolationFactor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, interpolationFactor);
}
inline ::UnityEngine::Vector3 GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>::Interpolate(::UnityEngine::Vector3  value0, ::UnityEngine::Vector3  value1, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>*>::get(),
                            "Interpolate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, value0, value1, t);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<T>::__set__currentSmoothedValue(T  value)  {
::cordl_internals::setInstanceField<T, 0x10>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__get__currentSmoothedValue()  {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__get__currentSmoothedValue() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<T>::__set__prevSmoothedValue(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__get__prevSmoothedValue()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__get__prevSmoothedValue() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<T>::__set__smooth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__get__smooth()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t const& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__get__smooth() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::FixedUpdateSmoothValue_1<T>* GlobalNamespace::FixedUpdateSmoothValue_1<T>::New_ctor(float_t  smooth)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>(smooth));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::FixedUpdateSmoothValue_1<T>::_ctor(float_t  smooth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, smooth);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::FixedUpdateSmoothValue_1<T>::SetStartValue(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>::get(),
                            "SetStartValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::FixedUpdateSmoothValue_1<T>::FixedUpdate(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::FixedUpdateSmoothValue_1<T>::GetValue(float_t  interpolationFactor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, interpolationFactor);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::FixedUpdateSmoothValue_1<T>::Interpolate(T  value0, T  value1, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>::get(),
                            "Interpolate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, value0, value1, t);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
