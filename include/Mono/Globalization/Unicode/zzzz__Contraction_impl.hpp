#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::Contraction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::Contraction::*)(int32_t, ::ArrayW<char16_t,::Array<char16_t>*>, ::StringW, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Globalization::Unicode::Contraction::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2415580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::Contraction*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Globalization::Unicode::Contraction::__set_Index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Globalization::Unicode::Contraction::__get_Index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Mono::Globalization::Unicode::Contraction::__get_Index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Mono::Globalization::Unicode::Contraction::__set_Source(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x18>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& Mono::Globalization::Unicode::Contraction::__get_Source()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x18>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& Mono::Globalization::Unicode::Contraction::__get_Source() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x18>(this);
}
constexpr void Mono::Globalization::Unicode::Contraction::__set_Replacement(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Mono::Globalization::Unicode::Contraction::__get_Replacement()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& Mono::Globalization::Unicode::Contraction::__get_Replacement() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void Mono::Globalization::Unicode::Contraction::__set_SortKey(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Globalization::Unicode::Contraction::__get_SortKey()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Globalization::Unicode::Contraction::__get_SortKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this);
}
inline ::Mono::Globalization::Unicode::Contraction* Mono::Globalization::Unicode::Contraction::New_ctor(int32_t  index, ::ArrayW<char16_t,::Array<char16_t>*>  source, ::StringW  replacement, ::ArrayW<uint8_t,::Array<uint8_t>*>  sortkey)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Globalization::Unicode::Contraction*>(index, source, replacement, sortkey));
}
inline void Mono::Globalization::Unicode::Contraction::_ctor(int32_t  index, ::ArrayW<char16_t,::Array<char16_t>*>  source, ::StringW  replacement, ::ArrayW<uint8_t,::Array<uint8_t>*>  sortkey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::Contraction*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, source, replacement, sortkey);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
