#pragma once
#include "System/Net/Http/Headers/zzzz__HeaderInfo_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_HeaderTypeInfo_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/Net/Http/Headers/zzzz__TryParseDelegate_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>::__set_parser(::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*  value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*, 0x28>(this, std::forward<::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr ::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>::__get_parser()  {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*> System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>::__get_parser() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>::New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>*>(name, parser, headerKind));
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>::_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::TryParseDelegate_1<::System::TimeSpan>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaderKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, parser, headerKind);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>::AddToCollection(::System::Object*  collection, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>*>::get(),
                            "AddToCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, collection, value);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Object* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>::CreateCollection(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>*>::get(),
                            "CreateCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaders*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HeaderInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, headers, headerInfo);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>::ToStringCollection(::System::Object*  collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>*>::get(),
                            "ToStringCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(*this, ___internal_method, collection);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline bool System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>::TryParse(::StringW  value, ByRef<::System::Object*>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::TimeSpan,U>*>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, result);
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>::__set_parser(::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*  value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*, 0x28>(this, std::forward<::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr ::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>::__get_parser()  {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*> System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>::__get_parser() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>::New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>*>(name, parser, headerKind));
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>::_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::TryParseDelegate_1<::System::DateTimeOffset>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaderKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, parser, headerKind);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>::AddToCollection(::System::Object*  collection, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>*>::get(),
                            "AddToCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, collection, value);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Object* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>::CreateCollection(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>*>::get(),
                            "CreateCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaders*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HeaderInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, headers, headerInfo);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>::ToStringCollection(::System::Object*  collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>*>::get(),
                            "ToStringCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(*this, ___internal_method, collection);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline bool System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>::TryParse(::StringW  value, ByRef<::System::Object*>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<::System::DateTimeOffset,U>*>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, result);
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>::__set_parser(::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*  value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*, 0x28>(this, std::forward<::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr ::System::Net::Http::Headers::TryParseDelegate_1<int64_t>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>::__get_parser()  {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*> System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>::__get_parser() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>::New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>*>(name, parser, headerKind));
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>::_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::TryParseDelegate_1<int64_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaderKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, parser, headerKind);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>::AddToCollection(::System::Object*  collection, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>*>::get(),
                            "AddToCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, collection, value);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Object* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>::CreateCollection(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>*>::get(),
                            "CreateCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaders*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HeaderInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, headers, headerInfo);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>::ToStringCollection(::System::Object*  collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>*>::get(),
                            "ToStringCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(*this, ___internal_method, collection);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline bool System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>::TryParse(::StringW  value, ByRef<::System::Object*>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int64_t,U>*>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, result);
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>::__set_parser(::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*, 0x28>(this, std::forward<::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr ::System::Net::Http::Headers::TryParseDelegate_1<int32_t>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>::__get_parser()  {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type U>
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*> System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>::__get_parser() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>::New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>*>(name, parser, headerKind));
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>::_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::TryParseDelegate_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaderKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, parser, headerKind);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>::AddToCollection(::System::Object*  collection, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>*>::get(),
                            "AddToCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, collection, value);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Object* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>::CreateCollection(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>*>::get(),
                            "CreateCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaders*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HeaderInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, headers, headerInfo);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>::ToStringCollection(::System::Object*  collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>*>::get(),
                            "ToStringCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(*this, ___internal_method, collection);
}
template<::il2cpp_utils::il2cpp_reference_type U>
inline bool System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>::TryParse(::StringW  value, ByRef<::System::Object*>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<int32_t,U>*>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, result);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>::__set_parser(::System::Net::Http::Headers::TryParseDelegate_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<T>*, 0x28>(this, std::forward<::System::Net::Http::Headers::TryParseDelegate_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr ::System::Net::Http::Headers::TryParseDelegate_1<T>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>::__get_parser()  {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<T>*> System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>::__get_parser() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::TryParseDelegate_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>::New_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<T>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>*>(name, parser, headerKind));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>::_ctor(::StringW  name, ::System::Net::Http::Headers::TryParseDelegate_1<T>*  parser, ::System::Net::Http::Headers::HttpHeaderKind  headerKind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::TryParseDelegate_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaderKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, parser, headerKind);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>::AddToCollection(::System::Object*  collection, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>*>::get(),
                            "AddToCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, collection, value);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Object* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>::CreateCollection(::System::Net::Http::Headers::HttpHeaders*  headers, ::System::Net::Http::Headers::HeaderInfo*  headerInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>*>::get(),
                            "CreateCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaders*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HeaderInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, headers, headerInfo);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>::ToStringCollection(::System::Object*  collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>*>::get(),
                            "ToStringCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(*this, ___internal_method, collection);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type U>
inline bool System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>::TryParse(::StringW  value, ByRef<::System::Object*>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T,U>*>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, result);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
