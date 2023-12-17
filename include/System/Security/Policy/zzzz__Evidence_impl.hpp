#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
//  Writing Method size for method: ::System::Security::Policy::__Evidence__EvidenceEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Policy::__Evidence__EvidenceEnumerator::*)(::System::Collections::IEnumerator*, ::System::Collections::IEnumerator*)>(&::System::Security::Policy::__Evidence__EvidenceEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2456798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::__Evidence__EvidenceEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Policy::__Evidence__EvidenceEnumerator::*)()>(&::System::Security::Policy::__Evidence__EvidenceEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x24567c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::__Evidence__EvidenceEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Policy::__Evidence__EvidenceEnumerator::*)()>(&::System::Security::Policy::__Evidence__EvidenceEnumerator::Reset)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x24568f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::__Evidence__EvidenceEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Security::Policy::__Evidence__EvidenceEnumerator::*)()>(&::System::Security::Policy::__Evidence__EvidenceEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2456a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::Security::Policy::__Evidence__EvidenceEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr void System::Security::Policy::__Evidence__EvidenceEnumerator::__set_currentEnum(::System::Collections::IEnumerator*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IEnumerator*, 0x10>(this, std::forward<::System::Collections::IEnumerator*>(value));
}
constexpr ::System::Collections::IEnumerator* System::Security::Policy::__Evidence__EvidenceEnumerator::__get_currentEnum()  {
return ::cordl_internals::getInstanceField<::System::Collections::IEnumerator*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> System::Security::Policy::__Evidence__EvidenceEnumerator::__get_currentEnum() const {
return ::cordl_internals::getInstanceField<::System::Collections::IEnumerator*, 0x10>(this);
}
constexpr void System::Security::Policy::__Evidence__EvidenceEnumerator::__set_hostEnum(::System::Collections::IEnumerator*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IEnumerator*, 0x18>(this, std::forward<::System::Collections::IEnumerator*>(value));
}
constexpr ::System::Collections::IEnumerator* System::Security::Policy::__Evidence__EvidenceEnumerator::__get_hostEnum()  {
return ::cordl_internals::getInstanceField<::System::Collections::IEnumerator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> System::Security::Policy::__Evidence__EvidenceEnumerator::__get_hostEnum() const {
return ::cordl_internals::getInstanceField<::System::Collections::IEnumerator*, 0x18>(this);
}
constexpr void System::Security::Policy::__Evidence__EvidenceEnumerator::__set_assemblyEnum(::System::Collections::IEnumerator*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IEnumerator*, 0x20>(this, std::forward<::System::Collections::IEnumerator*>(value));
}
constexpr ::System::Collections::IEnumerator* System::Security::Policy::__Evidence__EvidenceEnumerator::__get_assemblyEnum()  {
return ::cordl_internals::getInstanceField<::System::Collections::IEnumerator*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> System::Security::Policy::__Evidence__EvidenceEnumerator::__get_assemblyEnum() const {
return ::cordl_internals::getInstanceField<::System::Collections::IEnumerator*, 0x20>(this);
}
inline ::System::Security::Policy::__Evidence__EvidenceEnumerator* System::Security::Policy::__Evidence__EvidenceEnumerator::New_ctor(::System::Collections::IEnumerator*  hostenum, ::System::Collections::IEnumerator*  assemblyenum)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Policy::__Evidence__EvidenceEnumerator*>(hostenum, assemblyenum));
}
inline void System::Security::Policy::__Evidence__EvidenceEnumerator::_ctor(::System::Collections::IEnumerator*  hostenum, ::System::Collections::IEnumerator*  assemblyenum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, hostenum, assemblyenum);
}
inline bool System::Security::Policy::__Evidence__EvidenceEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Security::Policy::__Evidence__EvidenceEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* System::Security::Policy::__Evidence__EvidenceEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Security::Policy::Evidence._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24565b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::get_Count)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24565bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2456618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            "get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2456620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            "get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Policy::Evidence::*)(::System::Array*, int32_t)>(&::System::Security::Policy::Evidence::CopyTo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2456624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24566e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::Security::Policy::Evidence::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Security::Policy::Evidence::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr void System::Security::Policy::Evidence::__set__locked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Security::Policy::Evidence::__get__locked()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Security::Policy::Evidence::__get__locked() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void System::Security::Policy::Evidence::__set_hostEvidenceList(::System::Collections::ArrayList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList*, 0x18>(this, std::forward<::System::Collections::ArrayList*>(value));
}
constexpr ::System::Collections::ArrayList* System::Security::Policy::Evidence::__get_hostEvidenceList()  {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> System::Security::Policy::Evidence::__get_hostEvidenceList() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x18>(this);
}
constexpr void System::Security::Policy::Evidence::__set_assemblyEvidenceList(::System::Collections::ArrayList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList*, 0x20>(this, std::forward<::System::Collections::ArrayList*>(value));
}
constexpr ::System::Collections::ArrayList* System::Security::Policy::Evidence::__get_assemblyEvidenceList()  {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> System::Security::Policy::Evidence::__get_assemblyEvidenceList() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x20>(this);
}
inline ::System::Security::Policy::Evidence* System::Security::Policy::Evidence::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Policy::Evidence*>());
}
inline void System::Security::Policy::Evidence::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::Security::Policy::Evidence::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool System::Security::Policy::Evidence::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            "get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* System::Security::Policy::Evidence::get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            "get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void System::Security::Policy::Evidence::CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* System::Security::Policy::Evidence::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
