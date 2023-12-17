#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::*)(::System::Array*, int32_t)>(&::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x290f9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::*)()>(&::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x290ff6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::*)()>(&::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x290ff94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::*)()>(&::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x290ffa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr void System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__set__array(::System::Array*  value)  {
::cordl_internals::setInstanceField<::System::Array*, 0x10>(this, std::forward<::System::Array*>(value));
}
constexpr ::System::Array* System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__get__array()  {
return ::cordl_internals::getInstanceField<::System::Array*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Array*> System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__get__array() const {
return ::cordl_internals::getInstanceField<::System::Array*, 0x10>(this);
}
constexpr void System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__set__total(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__get__total()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__get__total() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__set__current(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__get__current()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::__get__current() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
inline ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator* System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::New_ctor(::System::Array*  array, int32_t  count)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>(array, count));
}
inline void System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::_ctor(::System::Array*  array, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, count);
}
inline bool System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>)>(&::System::ComponentModel::EventDescriptorCollection::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x290eec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>, bool)>(&::System::ComponentModel::EventDescriptorCollection::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x290ef74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290ef98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.set_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::set_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290efa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::get_Item)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x290efa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::EventDescriptorCollection::*)(::StringW)>(&::System::ComponentModel::EventDescriptorCollection::get_Item)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x290f0e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&::System::ComponentModel::EventDescriptorCollection::Add)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x290f0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x290f2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&::System::ComponentModel::EventDescriptorCollection::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x290f318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::System::Array*, int32_t)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x290f390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.EnsureEventsOwned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::EnsureEventsOwned)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x290f034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "EnsureEventsOwned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.EnsureSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::EnsureSize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x290f1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "EnsureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::EventDescriptorCollection::*)(::StringW, bool)>(&::System::ComponentModel::EventDescriptorCollection::Find)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x290f628;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.IndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&::System::ComponentModel::EventDescriptorCollection::IndexOf)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x290f330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t, ::System::ComponentModel::EventDescriptor*)>(&::System::ComponentModel::EventDescriptorCollection::Insert)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x290f73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::System::ComponentModel::EventDescriptor*)>(&::System::ComponentModel::EventDescriptorCollection::Remove)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x290f82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.RemoveAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::RemoveAt)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x290f89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x290f950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.InternalSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::ArrayW<::StringW,::Array<::StringW>*>)>(&::System::ComponentModel::EventDescriptorCollection::InternalSort)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x290f3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "InternalSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.InternalSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::System::Collections::IComparer*)>(&::System::ComponentModel::EventDescriptorCollection::InternalSort)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x290fa1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "InternalSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290fa94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290fa9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_ICollection_get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290faa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.ICollection.get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x290faac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x290fab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t, ::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x290fac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)(::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x290fc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EventDescriptorCollection::*)(::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x290fcbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x290fd4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_IndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EventDescriptorCollection::*)(::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x290fd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t, ::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x290fdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(::System::Object*)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x290fe68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_RemoveAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EventDescriptorCollection::*)(int32_t)>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x290feec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290fef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptorCollection.System_Collections_IList_get_IsFixedSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EventDescriptorCollection::*)()>(&::System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290fef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::ComponentModel::EventDescriptorCollection::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::ComponentModel::EventDescriptorCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr  System::ComponentModel::EventDescriptorCollection::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__events(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>, 0x10>(this, std::forward<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>>(value));
}
constexpr ::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>& System::ComponentModel::EventDescriptorCollection::__get__events()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>, 0x10>(this);
}
constexpr ::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*> const& System::ComponentModel::EventDescriptorCollection::__get__events() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>, 0x10>(this);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__namedSort(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::ComponentModel::EventDescriptorCollection::__get__namedSort()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::ComponentModel::EventDescriptorCollection::__get__namedSort() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__comparer(::System::Collections::IComparer*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IComparer*, 0x20>(this, std::forward<::System::Collections::IComparer*>(value));
}
constexpr ::System::Collections::IComparer* System::ComponentModel::EventDescriptorCollection::__get__comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::IComparer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> System::ComponentModel::EventDescriptorCollection::__get__comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::IComparer*, 0x20>(this);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__eventsOwned(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& System::ComponentModel::EventDescriptorCollection::__get__eventsOwned()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& System::ComponentModel::EventDescriptorCollection::__get__eventsOwned() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__needSort(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this, std::forward<bool>(value));
}
constexpr bool& System::ComponentModel::EventDescriptorCollection::__get__needSort()  {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr bool const& System::ComponentModel::EventDescriptorCollection::__get__needSort() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__readOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this, std::forward<bool>(value));
}
constexpr bool& System::ComponentModel::EventDescriptorCollection::__get__readOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this);
}
constexpr bool const& System::ComponentModel::EventDescriptorCollection::__get__readOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this);
}
inline void System::ComponentModel::EventDescriptorCollection::setStaticF_Empty(::System::ComponentModel::EventDescriptorCollection*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::EventDescriptorCollection*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get>(std::forward<::System::ComponentModel::EventDescriptorCollection*>(value));
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::EventDescriptorCollection::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::EventDescriptorCollection*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get>();
}
constexpr void System::ComponentModel::EventDescriptorCollection::__set__Count_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::ComponentModel::EventDescriptorCollection::__get__Count_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& System::ComponentModel::EventDescriptorCollection::__get__Count_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::EventDescriptorCollection::New_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::EventDescriptorCollection*>(events));
}
inline void System::ComponentModel::EventDescriptorCollection::_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, events);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::EventDescriptorCollection::New_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events, bool  readOnly)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::EventDescriptorCollection*>(events, readOnly));
}
inline void System::ComponentModel::EventDescriptorCollection::_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>  events, bool  readOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::EventDescriptor*,::Array<::System::ComponentModel::EventDescriptor*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, events, readOnly);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void System::ComponentModel::EventDescriptorCollection::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptorCollection::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(*this, ___internal_method, index);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptorCollection::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(*this, ___internal_method, name);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::Add(::System::ComponentModel::EventDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::ComponentModel::EventDescriptorCollection::Contains(::System::ComponentModel::EventDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
inline void System::ComponentModel::EventDescriptorCollection::EnsureEventsOwned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "EnsureEventsOwned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::ComponentModel::EventDescriptorCollection::EnsureSize(int32_t  sizeNeeded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "EnsureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sizeNeeded);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptorCollection::Find(::StringW  name, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(*this, ___internal_method, name, ignoreCase);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::IndexOf(::System::ComponentModel::EventDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::Insert(int32_t  index, ::System::ComponentModel::EventDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, value);
}
inline void System::ComponentModel::EventDescriptorCollection::Remove(::System::ComponentModel::EventDescriptor*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::EventDescriptorCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void System::ComponentModel::EventDescriptorCollection::InternalSort(::ArrayW<::StringW,::Array<::StringW>*>  names)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "InternalSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, names);
}
inline void System::ComponentModel::EventDescriptorCollection::InternalSort(::System::Collections::IComparer*  sorter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "InternalSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sorter);
}
inline bool System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::System_Collections_ICollection_get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.ICollection.get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::EventDescriptorCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, index);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, value);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
inline bool System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Contains(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::ComponentModel::EventDescriptorCollection::System_Collections_IList_IndexOf(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Insert(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, value);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_Remove(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::ComponentModel::EventDescriptorCollection::System_Collections_IList_RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline bool System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::ComponentModel::EventDescriptorCollection::System_Collections_IList_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventDescriptorCollection*>::get(),
                            "System.Collections.IList.get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
