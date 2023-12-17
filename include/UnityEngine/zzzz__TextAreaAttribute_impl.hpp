#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__TextAreaAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextAreaAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextAreaAttribute::*)()>(&::UnityEngine::TextAreaAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ccc22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAreaAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAreaAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextAreaAttribute::*)(int32_t, int32_t)>(&::UnityEngine::TextAreaAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ccc24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAreaAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::TextAreaAttribute::__set_minLines(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextAreaAttribute::__get_minLines()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::TextAreaAttribute::__get_minLines() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::TextAreaAttribute::__set_maxLines(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextAreaAttribute::__get_maxLines()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& UnityEngine::TextAreaAttribute::__get_maxLines() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
inline ::UnityEngine::TextAreaAttribute* UnityEngine::TextAreaAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextAreaAttribute*>());
}
inline void UnityEngine::TextAreaAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAreaAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::TextAreaAttribute* UnityEngine::TextAreaAttribute::New_ctor(int32_t  minLines, int32_t  maxLines)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextAreaAttribute*>(minLines, maxLines));
}
inline void UnityEngine::TextAreaAttribute::_ctor(int32_t  minLines, int32_t  maxLines)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAreaAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, minLines, maxLines);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
