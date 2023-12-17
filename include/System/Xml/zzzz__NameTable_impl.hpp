#pragma once
#include "System/Xml/zzzz__XmlNameTable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__NameTable_def.hpp"
#include "System/Xml/zzzz__NameTable_def.hpp"
//  Writing Method size for method: ::System::Xml::__NameTable__Entry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__NameTable__Entry::*)(::StringW, int32_t, ::System::Xml::__NameTable__Entry*)>(&::System::Xml::__NameTable__Entry::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28929e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__NameTable__Entry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__NameTable__Entry*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::__NameTable__Entry::__set_str(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::__NameTable__Entry::__get_str()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Xml::__NameTable__Entry::__get_str() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Xml::__NameTable__Entry::__set_hashCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__NameTable__Entry::__get_hashCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Xml::__NameTable__Entry::__get_hashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Xml::__NameTable__Entry::__set_next(::System::Xml::__NameTable__Entry*  value)  {
::cordl_internals::setInstanceField<::System::Xml::__NameTable__Entry*, 0x20>(this, std::forward<::System::Xml::__NameTable__Entry*>(value));
}
constexpr ::System::Xml::__NameTable__Entry* System::Xml::__NameTable__Entry::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Xml::__NameTable__Entry*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::__NameTable__Entry*> System::Xml::__NameTable__Entry::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Xml::__NameTable__Entry*, 0x20>(this);
}
inline ::System::Xml::__NameTable__Entry* System::Xml::__NameTable__Entry::New_ctor(::StringW  str, int32_t  hashCode, ::System::Xml::__NameTable__Entry*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::__NameTable__Entry*>(str, hashCode, next));
}
inline void System::Xml::__NameTable__Entry::_ctor(::StringW  str, int32_t  hashCode, ::System::Xml::__NameTable__Entry*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__NameTable__Entry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::__NameTable__Entry*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, str, hashCode, next);
}
//  Writing Method size for method: ::System::Xml::NameTable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::NameTable::*)()>(&::System::Xml::NameTable::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x288a298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::NameTable::*)(::StringW)>(&::System::Xml::NameTable::Add)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x28923d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::NameTable::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::NameTable::Add)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2892658;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::NameTable::*)(::StringW)>(&::System::Xml::NameTable::Get)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2892880;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.AddEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::NameTable::*)(::StringW, int32_t)>(&::System::Xml::NameTable::AddEntry)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2892550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            "AddEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.Grow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::NameTable::*)()>(&::System::Xml::NameTable::Grow)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2892a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            "Grow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.TextEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::NameTable::TextEquals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28927d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            "TextEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::NameTable::__set_entries(::ArrayW<::System::Xml::__NameTable__Entry*,::Array<::System::Xml::__NameTable__Entry*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Xml::__NameTable__Entry*,::Array<::System::Xml::__NameTable__Entry*>*>, 0x10>(this, std::forward<::ArrayW<::System::Xml::__NameTable__Entry*,::Array<::System::Xml::__NameTable__Entry*>*>>(value));
}
constexpr ::ArrayW<::System::Xml::__NameTable__Entry*,::Array<::System::Xml::__NameTable__Entry*>*>& System::Xml::NameTable::__get_entries()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::__NameTable__Entry*,::Array<::System::Xml::__NameTable__Entry*>*>, 0x10>(this);
}
constexpr ::ArrayW<::System::Xml::__NameTable__Entry*,::Array<::System::Xml::__NameTable__Entry*>*> const& System::Xml::NameTable::__get_entries() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::__NameTable__Entry*,::Array<::System::Xml::__NameTable__Entry*>*>, 0x10>(this);
}
constexpr void System::Xml::NameTable::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::NameTable::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Xml::NameTable::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Xml::NameTable::__set_mask(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::NameTable::__get_mask()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& System::Xml::NameTable::__get_mask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void System::Xml::NameTable::__set_hashCodeRandomizer(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::NameTable::__get_hashCodeRandomizer()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Xml::NameTable::__get_hashCodeRandomizer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline ::System::Xml::NameTable* System::Xml::NameTable::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::NameTable*>());
}
inline void System::Xml::NameTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::NameTable::Add(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, key);
}
inline ::StringW System::Xml::NameTable::Add(::ArrayW<char16_t,::Array<char16_t>*>  key, int32_t  start, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, key, start, len);
}
inline ::StringW System::Xml::NameTable::Get(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, value);
}
inline ::StringW System::Xml::NameTable::AddEntry(::StringW  str, int32_t  hashCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            "AddEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, str, hashCode);
}
inline void System::Xml::NameTable::Grow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            "Grow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Xml::NameTable::TextEquals(::StringW  str1, ::ArrayW<char16_t,::Array<char16_t>*>  str2, int32_t  str2Start, int32_t  str2Length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                            "TextEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str1, str2, str2Start, str2Length);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
