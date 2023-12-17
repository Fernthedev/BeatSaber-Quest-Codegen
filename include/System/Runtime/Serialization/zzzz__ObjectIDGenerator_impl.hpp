#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectIDGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectIDGenerator::*)()>(&::System::Runtime::Serialization::ObjectIDGenerator::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x24b84e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.FindElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::ObjectIDGenerator::*)(::System::Object*, ByRef<bool>)>(&::System::Runtime::Serialization::ObjectIDGenerator::FindElement)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x24b85bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                            "FindElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.GetId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::ObjectIDGenerator::*)(::System::Object*, ByRef<bool>)>(&::System::Runtime::Serialization::ObjectIDGenerator::GetId)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x24b8680;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.HasId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::ObjectIDGenerator::*)(::System::Object*, ByRef<bool>)>(&::System::Runtime::Serialization::ObjectIDGenerator::HasId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24b8ab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.Rehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectIDGenerator::*)()>(&::System::Runtime::Serialization::ObjectIDGenerator::Rehash)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x24b8804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                            "Rehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::ObjectIDGenerator::__set_m_currentCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::ObjectIDGenerator::__get_m_currentCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Runtime::Serialization::ObjectIDGenerator::__get_m_currentCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Runtime::Serialization::ObjectIDGenerator::__set_m_currentSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::ObjectIDGenerator::__get_m_currentSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Runtime::Serialization::ObjectIDGenerator::__get_m_currentSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::Runtime::Serialization::ObjectIDGenerator::__set_m_ids(::ArrayW<int64_t,::Array<int64_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x18>(this, std::forward<::ArrayW<int64_t,::Array<int64_t>*>>(value));
}
constexpr ::ArrayW<int64_t,::Array<int64_t>*>& System::Runtime::Serialization::ObjectIDGenerator::__get_m_ids()  {
return ::cordl_internals::getInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x18>(this);
}
constexpr ::ArrayW<int64_t,::Array<int64_t>*> const& System::Runtime::Serialization::ObjectIDGenerator::__get_m_ids() const {
return ::cordl_internals::getInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x18>(this);
}
constexpr void System::Runtime::Serialization::ObjectIDGenerator::__set_m_objs(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x20>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& System::Runtime::Serialization::ObjectIDGenerator::__get_m_objs()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x20>(this);
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& System::Runtime::Serialization::ObjectIDGenerator::__get_m_objs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x20>(this);
}
inline void System::Runtime::Serialization::ObjectIDGenerator::setStaticF_sizes(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t,::Array<int32_t>*>, "sizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get>(std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t,::Array<int32_t>*> System::Runtime::Serialization::ObjectIDGenerator::getStaticF_sizes()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t,::Array<int32_t>*>, "sizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get>();
}
inline ::System::Runtime::Serialization::ObjectIDGenerator* System::Runtime::Serialization::ObjectIDGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::ObjectIDGenerator*>());
}
inline void System::Runtime::Serialization::ObjectIDGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ObjectIDGenerator::FindElement(::System::Object*  obj, ByRef<bool>  found)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                            "FindElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj, found);
}
inline int64_t System::Runtime::Serialization::ObjectIDGenerator::GetId(::System::Object*  obj, ByRef<bool>  firstTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                            "GetId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method, obj, firstTime);
}
inline int64_t System::Runtime::Serialization::ObjectIDGenerator::HasId(::System::Object*  obj, ByRef<bool>  firstTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                            "HasId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method, obj, firstTime);
}
inline void System::Runtime::Serialization::ObjectIDGenerator::Rehash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                            "Rehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
