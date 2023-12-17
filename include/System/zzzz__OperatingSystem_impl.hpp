#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__OperatingSystem_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/zzzz__PlatformID_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
//  Writing Method size for method: ::System::OperatingSystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::OperatingSystem::*)(::System::PlatformID, ::System::Version*)>(&::System::OperatingSystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d1374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::PlatformID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::OperatingSystem::*)(::System::PlatformID, ::System::Version*, ::StringW)>(&::System::OperatingSystem::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x25d137c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::PlatformID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::OperatingSystem::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::OperatingSystem::GetObjectData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25d14bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.get_Platform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::PlatformID (::System::OperatingSystem::*)()>(&::System::OperatingSystem::get_Platform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d14f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            "get_Platform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::OperatingSystem::*)()>(&::System::OperatingSystem::Clone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25d1500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::OperatingSystem::*)()>(&::System::OperatingSystem::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25d157c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.get_VersionString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::OperatingSystem::*)()>(&::System::OperatingSystem::get_VersionString)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x25d1580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            "get_VersionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::OperatingSystem::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  System::OperatingSystem::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr void System::OperatingSystem::__set__version(::System::Version*  value)  {
::cordl_internals::setInstanceField<::System::Version*, 0x10>(this, std::forward<::System::Version*>(value));
}
constexpr ::System::Version* System::OperatingSystem::__get__version()  {
return ::cordl_internals::getInstanceField<::System::Version*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> System::OperatingSystem::__get__version() const {
return ::cordl_internals::getInstanceField<::System::Version*, 0x10>(this);
}
constexpr void System::OperatingSystem::__set__platform(::System::PlatformID  value)  {
::cordl_internals::setInstanceField<::System::PlatformID, 0x18>(this, std::forward<::System::PlatformID>(value));
}
constexpr ::System::PlatformID& System::OperatingSystem::__get__platform()  {
return ::cordl_internals::getInstanceField<::System::PlatformID, 0x18>(this);
}
constexpr ::System::PlatformID const& System::OperatingSystem::__get__platform() const {
return ::cordl_internals::getInstanceField<::System::PlatformID, 0x18>(this);
}
constexpr void System::OperatingSystem::__set__servicePack(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::OperatingSystem::__get__servicePack()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& System::OperatingSystem::__get__servicePack() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void System::OperatingSystem::__set__versionString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::OperatingSystem::__get__versionString()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& System::OperatingSystem::__get__versionString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
inline ::System::OperatingSystem* System::OperatingSystem::New_ctor(::System::PlatformID  platform, ::System::Version*  version)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::OperatingSystem*>(platform, version));
}
inline void System::OperatingSystem::_ctor(::System::PlatformID  platform, ::System::Version*  version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::PlatformID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, platform, version);
}
inline ::System::OperatingSystem* System::OperatingSystem::New_ctor(::System::PlatformID  platform, ::System::Version*  version, ::StringW  servicePack)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::OperatingSystem*>(platform, version, servicePack));
}
inline void System::OperatingSystem::_ctor(::System::PlatformID  platform, ::System::Version*  version, ::StringW  servicePack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::PlatformID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, platform, version, servicePack);
}
inline void System::OperatingSystem::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline ::System::PlatformID System::OperatingSystem::get_Platform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            "get_Platform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::PlatformID, false>(*this, ___internal_method);
}
inline ::System::Object* System::OperatingSystem::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::StringW System::OperatingSystem::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::OperatingSystem::get_VersionString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::OperatingSystem*>::get(),
                            "get_VersionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
