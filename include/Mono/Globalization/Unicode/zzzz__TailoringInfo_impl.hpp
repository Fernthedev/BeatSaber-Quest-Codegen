#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__TailoringInfo_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::TailoringInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::TailoringInfo::*)(int32_t, int32_t, int32_t, bool)>(&::Mono::Globalization::Unicode::TailoringInfo::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x241553c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::TailoringInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Globalization::Unicode::TailoringInfo::__set_LCID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Globalization::Unicode::TailoringInfo::__get_LCID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Mono::Globalization::Unicode::TailoringInfo::__get_LCID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Mono::Globalization::Unicode::TailoringInfo::__set_TailoringIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Globalization::Unicode::TailoringInfo::__get_TailoringIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& Mono::Globalization::Unicode::TailoringInfo::__get_TailoringIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void Mono::Globalization::Unicode::TailoringInfo::__set_TailoringCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Globalization::Unicode::TailoringInfo::__get_TailoringCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& Mono::Globalization::Unicode::TailoringInfo::__get_TailoringCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void Mono::Globalization::Unicode::TailoringInfo::__set_FrenchSort(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Globalization::Unicode::TailoringInfo::__get_FrenchSort()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& Mono::Globalization::Unicode::TailoringInfo::__get_FrenchSort() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
inline ::Mono::Globalization::Unicode::TailoringInfo* Mono::Globalization::Unicode::TailoringInfo::New_ctor(int32_t  lcid, int32_t  tailoringIndex, int32_t  tailoringCount, bool  frenchSort)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Globalization::Unicode::TailoringInfo*>(lcid, tailoringIndex, tailoringCount, frenchSort));
}
inline void Mono::Globalization::Unicode::TailoringInfo::_ctor(int32_t  lcid, int32_t  tailoringIndex, int32_t  tailoringCount, bool  frenchSort)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::TailoringInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lcid, tailoringIndex, tailoringCount, frenchSort);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
