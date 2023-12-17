#pragma once
#include "System/Net/Http/Headers/zzzz__HeaderInfo_HeaderTypeInfo_2_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_CollectionHeaderTypeInfo_2_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/Http/Headers/zzzz__TryParseListDelegate_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr void System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::__set_minimalCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr int32_t& System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::__get_minimalCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr int32_t const& System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::__get_minimalCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr void System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::__set_separator(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr ::StringW& System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::__get_separator()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr ::StringW const& System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::__get_separator() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr void System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::__set_parser(::System::Net::Http::Headers::TryParseListDelegate_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::TryParseListDelegate_1<T>*, 0x40>(this, std::forward<::System::Net::Http::Headers::TryParseListDelegate_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr ::System::Net::Http::Headers::TryParseListDelegate_1<T>* System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::__get_parser()  {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseListDelegate_1<T>*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseListDelegate_1<T>*> System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::__get_parser() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseListDelegate_1<T>*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>* System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind, int32_t  minimalCount, ::StringW  separator)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>*>(name, parser, headerKind, minimalCount, separator));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind, int32_t  minimalCount, ::StringW  separator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::TryParseListDelegate_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaderKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, parser, headerKind, minimalCount, separator);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
inline ::StringW System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::get_Separator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>*>::get(),
                            "get_Separator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
inline bool System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>::TryParse(::StringW  value, ByRef<::System::Object*>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T,U>*>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, result);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
