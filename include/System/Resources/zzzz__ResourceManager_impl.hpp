#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
//  Writing Method size for method: ::System::Resources::__ResourceManager__CultureNameResourceSetPair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::__ResourceManager__CultureNameResourceSetPair::*)()>(&::System::Resources::__ResourceManager__CultureNameResourceSetPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e1588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceManager__CultureNameResourceSetPair*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::System::Resources::__ResourceManager__CultureNameResourceSetPair* System::Resources::__ResourceManager__CultureNameResourceSetPair::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Resources::__ResourceManager__CultureNameResourceSetPair*>());
}
inline void System::Resources::__ResourceManager__CultureNameResourceSetPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceManager__CultureNameResourceSetPair*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Resources::__ResourceManager__ResourceManagerMediator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::__ResourceManager__ResourceManagerMediator::*)(::System::Resources::ResourceManager*)>(&::System::Resources::__ResourceManager__ResourceManagerMediator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24e1590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceManager__ResourceManagerMediator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Resources::__ResourceManager__ResourceManagerMediator::__set__rm(::System::Resources::ResourceManager*  value)  {
::cordl_internals::setInstanceField<::System::Resources::ResourceManager*, 0x10>(this, std::forward<::System::Resources::ResourceManager*>(value));
}
constexpr ::System::Resources::ResourceManager* System::Resources::__ResourceManager__ResourceManagerMediator::__get__rm()  {
return ::cordl_internals::getInstanceField<::System::Resources::ResourceManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Resources::ResourceManager*> System::Resources::__ResourceManager__ResourceManagerMediator::__get__rm() const {
return ::cordl_internals::getInstanceField<::System::Resources::ResourceManager*, 0x10>(this);
}
inline ::System::Resources::__ResourceManager__ResourceManagerMediator* System::Resources::__ResourceManager__ResourceManagerMediator::New_ctor(::System::Resources::ResourceManager*  rm)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Resources::__ResourceManager__ResourceManagerMediator*>(rm));
}
inline void System::Resources::__ResourceManager__ResourceManagerMediator::_ctor(::System::Resources::ResourceManager*  rm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceManager__ResourceManagerMediator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceManager*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rm);
}
//  Writing Method size for method: ::System::Resources::ResourceManager.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x24e1398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)()>(&::System::Resources::ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24e14b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnDeserializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Resources::ResourceManager::OnDeserializing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24e1608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            "OnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Resources::ResourceManager::OnDeserialized)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x24e1618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.OnSerializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceManager::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Resources::ResourceManager::OnSerializing)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24e17e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceManager.CompareNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::System::Reflection::AssemblyName*)>(&::System::Resources::ResourceManager::CompareNames)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x24e1854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            "CompareNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Resources::ResourceManager::__set_ResourceSets(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x10>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::Resources::ResourceManager::__get_ResourceSets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::Resources::ResourceManager::__get_ResourceSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x10>(this);
}
constexpr void System::Resources::ResourceManager::__set__resourceSets(::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>* System::Resources::ResourceManager::__get__resourceSets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>*> System::Resources::ResourceManager::__get__resourceSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>*, 0x18>(this);
}
constexpr void System::Resources::ResourceManager::__set_MainAssembly(::System::Reflection::Assembly*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::Assembly*, 0x20>(this, std::forward<::System::Reflection::Assembly*>(value));
}
constexpr ::System::Reflection::Assembly* System::Resources::ResourceManager::__get_MainAssembly()  {
return ::cordl_internals::getInstanceField<::System::Reflection::Assembly*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> System::Resources::ResourceManager::__get_MainAssembly() const {
return ::cordl_internals::getInstanceField<::System::Reflection::Assembly*, 0x20>(this);
}
constexpr void System::Resources::ResourceManager::__set__neutralResourcesCulture(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setInstanceField<::System::Globalization::CultureInfo*, 0x28>(this, std::forward<::System::Globalization::CultureInfo*>(value));
}
constexpr ::System::Globalization::CultureInfo* System::Resources::ResourceManager::__get__neutralResourcesCulture()  {
return ::cordl_internals::getInstanceField<::System::Globalization::CultureInfo*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> System::Resources::ResourceManager::__get__neutralResourcesCulture() const {
return ::cordl_internals::getInstanceField<::System::Globalization::CultureInfo*, 0x28>(this);
}
constexpr void System::Resources::ResourceManager::__set__lastUsedResourceCache(::System::Resources::__ResourceManager__CultureNameResourceSetPair*  value)  {
::cordl_internals::setInstanceField<::System::Resources::__ResourceManager__CultureNameResourceSetPair*, 0x30>(this, std::forward<::System::Resources::__ResourceManager__CultureNameResourceSetPair*>(value));
}
constexpr ::System::Resources::__ResourceManager__CultureNameResourceSetPair* System::Resources::ResourceManager::__get__lastUsedResourceCache()  {
return ::cordl_internals::getInstanceField<::System::Resources::__ResourceManager__CultureNameResourceSetPair*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Resources::__ResourceManager__CultureNameResourceSetPair*> System::Resources::ResourceManager::__get__lastUsedResourceCache() const {
return ::cordl_internals::getInstanceField<::System::Resources::__ResourceManager__CultureNameResourceSetPair*, 0x30>(this);
}
constexpr void System::Resources::ResourceManager::__set_UseManifest(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& System::Resources::ResourceManager::__get_UseManifest()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& System::Resources::ResourceManager::__get_UseManifest() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void System::Resources::ResourceManager::__set_UseSatelliteAssem(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& System::Resources::ResourceManager::__get_UseSatelliteAssem()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& System::Resources::ResourceManager::__get_UseSatelliteAssem() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr void System::Resources::ResourceManager::__set__fallbackLoc(::System::Resources::UltimateResourceFallbackLocation  value)  {
::cordl_internals::setInstanceField<::System::Resources::UltimateResourceFallbackLocation, 0x3c>(this, std::forward<::System::Resources::UltimateResourceFallbackLocation>(value));
}
constexpr ::System::Resources::UltimateResourceFallbackLocation& System::Resources::ResourceManager::__get__fallbackLoc()  {
return ::cordl_internals::getInstanceField<::System::Resources::UltimateResourceFallbackLocation, 0x3c>(this);
}
constexpr ::System::Resources::UltimateResourceFallbackLocation const& System::Resources::ResourceManager::__get__fallbackLoc() const {
return ::cordl_internals::getInstanceField<::System::Resources::UltimateResourceFallbackLocation, 0x3c>(this);
}
constexpr void System::Resources::ResourceManager::__set__callingAssembly(::System::Reflection::Assembly*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::Assembly*, 0x40>(this, std::forward<::System::Reflection::Assembly*>(value));
}
constexpr ::System::Reflection::Assembly* System::Resources::ResourceManager::__get__callingAssembly()  {
return ::cordl_internals::getInstanceField<::System::Reflection::Assembly*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> System::Resources::ResourceManager::__get__callingAssembly() const {
return ::cordl_internals::getInstanceField<::System::Reflection::Assembly*, 0x40>(this);
}
constexpr void System::Resources::ResourceManager::__set_m_callingAssembly(::System::Reflection::RuntimeAssembly*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::RuntimeAssembly*, 0x48>(this, std::forward<::System::Reflection::RuntimeAssembly*>(value));
}
constexpr ::System::Reflection::RuntimeAssembly* System::Resources::ResourceManager::__get_m_callingAssembly()  {
return ::cordl_internals::getInstanceField<::System::Reflection::RuntimeAssembly*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::RuntimeAssembly*> System::Resources::ResourceManager::__get_m_callingAssembly() const {
return ::cordl_internals::getInstanceField<::System::Reflection::RuntimeAssembly*, 0x48>(this);
}
constexpr void System::Resources::ResourceManager::__set_resourceGroveler(::System::Resources::IResourceGroveler*  value)  {
::cordl_internals::setInstanceField<::System::Resources::IResourceGroveler*, 0x50>(this, std::forward<::System::Resources::IResourceGroveler*>(value));
}
constexpr ::System::Resources::IResourceGroveler* System::Resources::ResourceManager::__get_resourceGroveler()  {
return ::cordl_internals::getInstanceField<::System::Resources::IResourceGroveler*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Resources::IResourceGroveler*> System::Resources::ResourceManager::__get_resourceGroveler() const {
return ::cordl_internals::getInstanceField<::System::Resources::IResourceGroveler*, 0x50>(this);
}
inline void System::Resources::ResourceManager::setStaticF_MagicNumber(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MagicNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_MagicNumber()  {
return ::cordl_internals::getStaticField<int32_t, "MagicNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_HeaderVersionNumber(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "HeaderVersionNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_HeaderVersionNumber()  {
return ::cordl_internals::getStaticField<int32_t, "HeaderVersionNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF__minResourceSet(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "_minResourceSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Resources::ResourceManager::getStaticF__minResourceSet()  {
return ::cordl_internals::getStaticField<::System::Type*, "_minResourceSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_ResReaderTypeName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ResReaderTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_ResReaderTypeName()  {
return ::cordl_internals::getStaticField<::StringW, "ResReaderTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_ResSetTypeName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ResSetTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_ResSetTypeName()  {
return ::cordl_internals::getStaticField<::StringW, "ResSetTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_MscorlibName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "MscorlibName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Resources::ResourceManager::getStaticF_MscorlibName()  {
return ::cordl_internals::getStaticField<::StringW, "MscorlibName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::setStaticF_DEBUG(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DEBUG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Resources::ResourceManager::getStaticF_DEBUG()  {
return ::cordl_internals::getStaticField<int32_t, "DEBUG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get>();
}
inline void System::Resources::ResourceManager::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Resources::ResourceManager* System::Resources::ResourceManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Resources::ResourceManager*>());
}
inline void System::Resources::ResourceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Resources::ResourceManager::OnDeserializing(::System::Runtime::Serialization::StreamingContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            "OnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ctx);
}
inline void System::Resources::ResourceManager::OnDeserialized(::System::Runtime::Serialization::StreamingContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ctx);
}
inline void System::Resources::ResourceManager::OnSerializing(::System::Runtime::Serialization::StreamingContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ctx);
}
inline bool System::Resources::ResourceManager::CompareNames(::StringW  asmTypeName1, ::StringW  typeName2, ::System::Reflection::AssemblyName*  asmName2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceManager*>::get(),
                            "CompareNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, asmTypeName1, typeName2, asmName2);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
