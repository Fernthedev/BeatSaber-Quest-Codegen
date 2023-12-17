#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ProfanityFilter_def.hpp"
#include "GlobalNamespace/zzzz__ProfanityFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter__TrieNode.AddWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ProfanityFilter__TrieNode::*)(::StringW, int32_t)>(&::GlobalNamespace::__ProfanityFilter__TrieNode::AddWord)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xe539b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(),
                            "AddWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter__TrieNode.IsMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ProfanityFilter__TrieNode::*)(::StringW, int32_t)>(&::GlobalNamespace::__ProfanityFilter__TrieNode::IsMatch)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xe53ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(),
                            "IsMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter__TrieNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ProfanityFilter__TrieNode::*)()>(&::GlobalNamespace::__ProfanityFilter__TrieNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe539a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__ProfanityFilter__TrieNode::__set__children(::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::__ProfanityFilter__TrieNode*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::__ProfanityFilter__TrieNode*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::__ProfanityFilter__TrieNode*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::__ProfanityFilter__TrieNode*>* GlobalNamespace::__ProfanityFilter__TrieNode::__get__children()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::__ProfanityFilter__TrieNode*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::__ProfanityFilter__TrieNode*>*> GlobalNamespace::__ProfanityFilter__TrieNode::__get__children() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::__ProfanityFilter__TrieNode*>*, 0x10>(this);
}
constexpr void GlobalNamespace::__ProfanityFilter__TrieNode::__set__shortestWord(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ProfanityFilter__TrieNode::__get__shortestWord()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__ProfanityFilter__TrieNode::__get__shortestWord() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline void GlobalNamespace::__ProfanityFilter__TrieNode::AddWord(::StringW  word, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(),
                            "AddWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, word, index);
}
inline bool GlobalNamespace::__ProfanityFilter__TrieNode::IsMatch(::StringW  word, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(),
                            "IsMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, word, index);
}
inline ::GlobalNamespace::__ProfanityFilter__TrieNode* GlobalNamespace::__ProfanityFilter__TrieNode::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ProfanityFilter__TrieNode*>());
}
inline void GlobalNamespace::__ProfanityFilter__TrieNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter__TrieNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)(int32_t)>(&::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xe540d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(&::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe54174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(&::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe54178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_Collections_Generic_IEnumerator_System_Char__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(&::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerator_System_Char__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5421c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Char>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(&::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe54224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(&::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xe54264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_Collections_Generic_IEnumerable_System_Char__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>* (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(&::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerable_System_Char__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe542c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::*)()>(&::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe54364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr  GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::operator ::System::Collections::Generic::IEnumerable_1<char16_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr  GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::operator ::System::Collections::Generic::IEnumerator_1<char16_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__set___2__current(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x14>(this, std::forward<char16_t>(value));
}
constexpr char16_t& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__get___2__current()  {
return ::cordl_internals::getInstanceField<char16_t, 0x14>(this);
}
constexpr char16_t const& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__get___2__current() const {
return ::cordl_internals::getInstanceField<char16_t, 0x14>(this);
}
constexpr void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__set_c(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x1c>(this, std::forward<char16_t>(value));
}
constexpr char16_t& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__get_c()  {
return ::cordl_internals::getInstanceField<char16_t, 0x1c>(this);
}
constexpr char16_t const& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__get_c() const {
return ::cordl_internals::getInstanceField<char16_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__set___3__c(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x1e>(this, std::forward<char16_t>(value));
}
constexpr char16_t& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__get___3__c()  {
return ::cordl_internals::getInstanceField<char16_t, 0x1e>(this);
}
constexpr char16_t const& GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::__get___3__c() const {
return ::cordl_internals::getInstanceField<char16_t, 0x1e>(this);
}
inline ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>(__1__state));
}
inline void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline char16_t GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerator_System_Char__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Char>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_Generic_IEnumerable_System_Char__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<char16_t>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProfanityFilter::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::ProfanityFilter::_ctor)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xe53668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter.IsProfane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ProfanityFilter::*)(::StringW)>(&::GlobalNamespace::ProfanityFilter::IsProfane)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe53e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(),
                            "IsProfane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter.GetLookalikeLetters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>* (*)(char16_t)>(&::GlobalNamespace::ProfanityFilter::GetLookalikeLetters)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe5405c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(),
                            "GetLookalikeLetters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfanityFilter.GetLeetEquivalent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&::GlobalNamespace::ProfanityFilter::GetLeetEquivalent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe54108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(),
                            "GetLeetEquivalent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ProfanityFilter::__set__trie(::GlobalNamespace::__ProfanityFilter__TrieNode*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ProfanityFilter__TrieNode*, 0x10>(this, std::forward<::GlobalNamespace::__ProfanityFilter__TrieNode*>(value));
}
constexpr ::GlobalNamespace::__ProfanityFilter__TrieNode* GlobalNamespace::ProfanityFilter::__get__trie()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ProfanityFilter__TrieNode*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ProfanityFilter__TrieNode*> GlobalNamespace::ProfanityFilter::__get__trie() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ProfanityFilter__TrieNode*, 0x10>(this);
}
inline ::GlobalNamespace::ProfanityFilter* GlobalNamespace::ProfanityFilter::New_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>*  wordList)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ProfanityFilter*>(wordList));
}
inline void GlobalNamespace::ProfanityFilter::_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>*  wordList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, wordList);
}
inline bool GlobalNamespace::ProfanityFilter::IsProfane(::StringW  word)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(),
                            "IsProfane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, word);
}
inline ::System::Collections::Generic::IEnumerable_1<char16_t>* GlobalNamespace::ProfanityFilter::GetLookalikeLetters(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(),
                            "GetLookalikeLetters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<char16_t>*, false>(nullptr, ___internal_method, c);
}
inline char16_t GlobalNamespace::ProfanityFilter::GetLeetEquivalent(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfanityFilter*>::get(),
                            "GetLeetEquivalent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
