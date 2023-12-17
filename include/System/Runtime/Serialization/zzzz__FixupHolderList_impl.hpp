#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolderList_def.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolder_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolderList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::FixupHolderList::*)()>(&::System::Runtime::Serialization::FixupHolderList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bc7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolderList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolderList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::FixupHolderList::*)(int32_t)>(&::System::Runtime::Serialization::FixupHolderList::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24bc8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolderList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolderList.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::FixupHolderList::*)(::System::Runtime::Serialization::FixupHolder*)>(&::System::Runtime::Serialization::FixupHolderList::Add)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x24bc944;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolderList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolderList*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolderList.EnlargeArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::FixupHolderList::*)()>(&::System::Runtime::Serialization::FixupHolderList::EnlargeArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24bc9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolderList*>::get(),
                            "EnlargeArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::FixupHolderList::__set_m_values(::ArrayW<::System::Runtime::Serialization::FixupHolder*,::Array<::System::Runtime::Serialization::FixupHolder*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Runtime::Serialization::FixupHolder*,::Array<::System::Runtime::Serialization::FixupHolder*>*>, 0x10>(this, std::forward<::ArrayW<::System::Runtime::Serialization::FixupHolder*,::Array<::System::Runtime::Serialization::FixupHolder*>*>>(value));
}
constexpr ::ArrayW<::System::Runtime::Serialization::FixupHolder*,::Array<::System::Runtime::Serialization::FixupHolder*>*>& System::Runtime::Serialization::FixupHolderList::__get_m_values()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Runtime::Serialization::FixupHolder*,::Array<::System::Runtime::Serialization::FixupHolder*>*>, 0x10>(this);
}
constexpr ::ArrayW<::System::Runtime::Serialization::FixupHolder*,::Array<::System::Runtime::Serialization::FixupHolder*>*> const& System::Runtime::Serialization::FixupHolderList::__get_m_values() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Runtime::Serialization::FixupHolder*,::Array<::System::Runtime::Serialization::FixupHolder*>*>, 0x10>(this);
}
constexpr void System::Runtime::Serialization::FixupHolderList::__set_m_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::FixupHolderList::__get_m_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Runtime::Serialization::FixupHolderList::__get_m_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline ::System::Runtime::Serialization::FixupHolderList* System::Runtime::Serialization::FixupHolderList::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::FixupHolderList*>());
}
inline void System::Runtime::Serialization::FixupHolderList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolderList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Runtime::Serialization::FixupHolderList* System::Runtime::Serialization::FixupHolderList::New_ctor(int32_t  startingSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::FixupHolderList*>(startingSize));
}
inline void System::Runtime::Serialization::FixupHolderList::_ctor(int32_t  startingSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolderList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, startingSize);
}
inline void System::Runtime::Serialization::FixupHolderList::Add(::System::Runtime::Serialization::FixupHolder*  fixup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolderList*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::FixupHolder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fixup);
}
inline void System::Runtime::Serialization::FixupHolderList::EnlargeArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolderList*>::get(),
                            "EnlargeArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
