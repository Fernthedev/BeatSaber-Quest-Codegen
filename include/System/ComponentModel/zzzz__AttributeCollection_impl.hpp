#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void System::ComponentModel::__AttributeCollection__AttributeEntry::__set_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::ComponentModel::__AttributeCollection__AttributeEntry::__get_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::ComponentModel::__AttributeCollection__AttributeEntry::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::ComponentModel::__AttributeCollection__AttributeEntry::__set_index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::ComponentModel::__AttributeCollection__AttributeEntry::__get_index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::ComponentModel::__AttributeCollection__AttributeEntry::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::__AttributeCollection__AttributeEntry::__AttributeCollection__AttributeEntry(::System::Type*  type, int32_t  index) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->type = type;
this->index = index;
}
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::AttributeCollection::*)(::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>)>(&::System::ComponentModel::AttributeCollection::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2905878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*> (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290599c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29059a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute* (::System::ComponentModel::AttributeCollection::*)(::System::Type*)>(&::System::ComponentModel::AttributeCollection::get_Item)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x29059c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)(::System::Attribute*)>(&::System::ComponentModel::AttributeCollection::Contains)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29063f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.GetDefaultAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute* (::System::ComponentModel::AttributeCollection::*)(::System::Type*)>(&::System::ComponentModel::AttributeCollection::GetDefaultAttribute)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2905ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "GetDefaultAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2906450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2906474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290647c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2906484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "System.Collections.ICollection.get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29064a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::AttributeCollection::*)(::System::Array*, int32_t)>(&::System::ComponentModel::AttributeCollection::CopyTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29064ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::ComponentModel::AttributeCollection::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::ComponentModel::AttributeCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
inline void System::ComponentModel::AttributeCollection::setStaticF_Empty(::System::ComponentModel::AttributeCollection*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::AttributeCollection*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>(std::forward<::System::ComponentModel::AttributeCollection*>(value));
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::AttributeCollection::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::AttributeCollection*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>();
}
inline void System::ComponentModel::AttributeCollection::setStaticF_s_defaultAttributes(::System::Collections::Hashtable*  value)  {
::cordl_internals::setStaticField<::System::Collections::Hashtable*, "s_defaultAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::AttributeCollection::getStaticF_s_defaultAttributes()  {
return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "s_defaultAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>();
}
constexpr void System::ComponentModel::AttributeCollection::__set__attributes(::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>, 0x10>(this, std::forward<::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>>(value));
}
constexpr ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>& System::ComponentModel::AttributeCollection::__get__attributes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>, 0x10>(this);
}
constexpr ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*> const& System::ComponentModel::AttributeCollection::__get__attributes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>, 0x10>(this);
}
inline void System::ComponentModel::AttributeCollection::setStaticF_s_internalSyncObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::AttributeCollection::getStaticF_s_internalSyncObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get>();
}
constexpr void System::ComponentModel::AttributeCollection::__set__foundAttributeTypes(::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>, 0x18>(this, std::forward<::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>>(value));
}
constexpr ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>& System::ComponentModel::AttributeCollection::__get__foundAttributeTypes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*> const& System::ComponentModel::AttributeCollection::__get__foundAttributeTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>, 0x18>(this);
}
constexpr void System::ComponentModel::AttributeCollection::__set__index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::ComponentModel::AttributeCollection::__get__index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::ComponentModel::AttributeCollection::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::AttributeCollection::New_ctor(::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::AttributeCollection*>(attributes));
}
inline void System::ComponentModel::AttributeCollection::_ctor(::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attributes);
}
inline ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*> System::ComponentModel::AttributeCollection::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>, false>(*this, ___internal_method);
}
inline int32_t System::ComponentModel::AttributeCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Attribute* System::ComponentModel::AttributeCollection::get_Item(::System::Type*  attributeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Attribute*, false>(*this, ___internal_method, attributeType);
}
inline bool System::ComponentModel::AttributeCollection::Contains(::System::Attribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, attribute);
}
inline ::System::Attribute* System::ComponentModel::AttributeCollection::GetDefaultAttribute(::System::Type*  attributeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "GetDefaultAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Attribute*, false>(*this, ___internal_method, attributeType);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::AttributeCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline bool System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline int32_t System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "System.Collections.ICollection.get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::AttributeCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void System::ComponentModel::AttributeCollection::CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeCollection*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
