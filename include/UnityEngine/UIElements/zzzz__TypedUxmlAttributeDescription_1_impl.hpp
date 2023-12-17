#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__set__defaultValue_k__BackingField(T  value)  {
::cordl_internals::setInstanceField<T, 0x40>(this, std::forward<T>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr T& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__get__defaultValue_k__BackingField()  {
return ::cordl_internals::getInstanceField<T, 0x40>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
constexpr T const& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x40>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline T UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, bag, cc);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline T UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::set_defaultValue(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>* UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>());
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>.GetValueFromBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::GetValueFromBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>.get_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::get_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>*>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>.set_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::*)(float_t)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::set_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>*>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::__set__defaultValue_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::__get__defaultValue_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
inline float_t UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>*>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, bag, cc);
}
inline float_t UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>*>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::set_defaultValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>*>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>* UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>*>());
}
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>.GetValueFromBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::GetValueFromBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>.get_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::get_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>*>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>.set_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::*)(int64_t)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::set_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>*>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::__set__defaultValue_k__BackingField(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this, std::forward<int64_t>(value));
}
constexpr int64_t& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::__get__defaultValue_k__BackingField()  {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this);
}
constexpr int64_t const& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this);
}
inline int64_t UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>*>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method, bag, cc);
}
inline int64_t UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>*>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::set_defaultValue(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>*>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>* UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>*>());
}
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>.GetValueFromBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::GetValueFromBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>.get_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::get_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>*>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>.set_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::*)(bool)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::set_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>*>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::__set__defaultValue_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::__get__defaultValue_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
inline bool UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>*>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, bag, cc);
}
inline bool UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>*>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::set_defaultValue(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>*>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>* UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>*>());
}
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>.GetValueFromBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::GetValueFromBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>.get_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::get_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>*>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>.set_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::*)(int32_t)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::set_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>*>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::__set__defaultValue_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::__get__defaultValue_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
inline int32_t UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>*>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, bag, cc);
}
inline int32_t UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>*>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::set_defaultValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>*>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>* UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>*>());
}
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__set__defaultValue_k__BackingField(T  value)  {
::cordl_internals::setInstanceField<T, 0x40>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__get__defaultValue_k__BackingField()  {
return ::cordl_internals::getInstanceField<T, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, bag, cc);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::set_defaultValue(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>* UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
