#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ByteMatcher_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__TermInfoStrings_def.hpp"
//  Writing Method size for method: ::System::ByteMatcher.AddMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ByteMatcher::*)(::System::TermInfoStrings, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::ByteMatcher::AddMapping)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2604f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(),
                            "AddMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TermInfoStrings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher.Sort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ByteMatcher::*)()>(&::System::ByteMatcher::Sort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26050a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher.StartsWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ByteMatcher::*)(int32_t)>(&::System::ByteMatcher::StartsWith)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2601fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(),
                            "StartsWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher.Match
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TermInfoStrings (::System::ByteMatcher::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t, ByRef<int32_t>)>(&::System::ByteMatcher::Match)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x260202c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(),
                            "Match",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ByteMatcher::*)()>(&::System::ByteMatcher::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2604eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ByteMatcher::__set_map(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x10>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::ByteMatcher::__get_map()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::ByteMatcher::__get_map() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x10>(this);
}
constexpr void System::ByteMatcher::__set_starts(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x18>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::ByteMatcher::__get_starts()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::ByteMatcher::__get_starts() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x18>(this);
}
inline void System::ByteMatcher::AddMapping(::System::TermInfoStrings  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(),
                            "AddMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TermInfoStrings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, val);
}
inline void System::ByteMatcher::Sort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::ByteMatcher::StartsWith(int32_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(),
                            "StartsWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, c);
}
inline ::System::TermInfoStrings System::ByteMatcher::Match(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  offset, int32_t  length, ByRef<int32_t>  used)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(),
                            "Match",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TermInfoStrings, false>(*this, ___internal_method, buffer, offset, length, used);
}
inline ::System::ByteMatcher* System::ByteMatcher::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::ByteMatcher*>());
}
inline void System::ByteMatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByteMatcher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
