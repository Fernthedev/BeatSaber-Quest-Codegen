#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Polyglot/zzzz__CsvReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Polyglot/zzzz__CsvReader_def.hpp"
constexpr void Polyglot::__CsvReader__ParsingMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Polyglot::__CsvReader__ParsingMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Polyglot::__CsvReader__ParsingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Polyglot::__CsvReader__ParsingMode::__CsvReader__ParsingMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Polyglot::__CsvReader__ParsingMode  Polyglot::__CsvReader__ParsingMode::None{static_cast<int32_t>(0x0)};
constexpr ::Polyglot::__CsvReader__ParsingMode  Polyglot::__CsvReader__ParsingMode::OutQuote{static_cast<int32_t>(0x1)};
constexpr ::Polyglot::__CsvReader__ParsingMode  Polyglot::__CsvReader__ParsingMode::InQuote{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Polyglot::CsvReader.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* (*)(::StringW)>(&::Polyglot::CsvReader::Parse)> {
  constexpr static std::size_t size = 0x7e8;
  constexpr static std::size_t addrs = 0x2800a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::CsvReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::CsvReader::*)()>(&::Polyglot::CsvReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280126c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* Polyglot::CsvReader::Parse(::StringW  src)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>*, false>(nullptr, ___internal_method, src);
}
inline ::Polyglot::CsvReader* Polyglot::CsvReader::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Polyglot::CsvReader*>());
}
inline void Polyglot::CsvReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
