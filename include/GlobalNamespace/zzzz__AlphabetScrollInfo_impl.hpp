#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollInfo_def.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AlphabetScrollInfo__Data._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AlphabetScrollInfo__Data::*)(char16_t, int32_t)>(&::GlobalNamespace::__AlphabetScrollInfo__Data::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x20f0df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AlphabetScrollInfo__Data*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__AlphabetScrollInfo__Data::__set_character(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x10>(this, std::forward<char16_t>(value));
}
constexpr char16_t& GlobalNamespace::__AlphabetScrollInfo__Data::__get_character()  {
return ::cordl_internals::getInstanceField<char16_t, 0x10>(this);
}
constexpr char16_t const& GlobalNamespace::__AlphabetScrollInfo__Data::__get_character() const {
return ::cordl_internals::getInstanceField<char16_t, 0x10>(this);
}
constexpr void GlobalNamespace::__AlphabetScrollInfo__Data::__set_cellIdx(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__AlphabetScrollInfo__Data::__get_cellIdx()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__AlphabetScrollInfo__Data::__get_cellIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
inline ::GlobalNamespace::__AlphabetScrollInfo__Data* GlobalNamespace::__AlphabetScrollInfo__Data::New_ctor(char16_t  character, int32_t  cellIdx)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AlphabetScrollInfo__Data*>(character, cellIdx));
}
inline void GlobalNamespace::__AlphabetScrollInfo__Data::_ctor(char16_t  character, int32_t  cellIdx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AlphabetScrollInfo__Data*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, character, cellIdx);
}
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlphabetScrollInfo::*)()>(&::GlobalNamespace::AlphabetScrollInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f0df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlphabetScrollInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::AlphabetScrollInfo* GlobalNamespace::AlphabetScrollInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AlphabetScrollInfo*>());
}
inline void GlobalNamespace::AlphabetScrollInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlphabetScrollInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
