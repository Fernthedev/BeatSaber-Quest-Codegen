#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceManager)
namespace System::Resources {
class __ResourceManager__ResourceManagerMediator;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Resources {
class IResourceGroveler;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Resources {
class __ResourceManager__CultureNameResourceSetPair;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Resources {
class ResourceSet;
}
namespace System {
class Type;
}
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
// Forward declare root types
namespace System::Resources {
class ResourceManager;
}
namespace System::Resources {
class __ResourceManager__CultureNameResourceSetPair;
}
namespace System::Resources {
class __ResourceManager__ResourceManagerMediator;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::ResourceManager);
MARK_REF_PTR_T(::System::Resources::__ResourceManager__CultureNameResourceSetPair);
MARK_REF_PTR_T(::System::Resources::__ResourceManager__ResourceManagerMediator);
// Type: ::CultureNameResourceSetPair
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3436))
// CS Name: ::ResourceManager::CultureNameResourceSetPair*
class CORDL_TYPE __ResourceManager__CultureNameResourceSetPair : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::System::Resources::__ResourceManager__CultureNameResourceSetPair* New_ctor() ;

/// @brief Method .ctor addr 0x24e1588 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CultureNameResourceSetPair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ResourceManager__CultureNameResourceSetPair(__ResourceManager__CultureNameResourceSetPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CultureNameResourceSetPair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ResourceManager__CultureNameResourceSetPair(__ResourceManager__CultureNameResourceSetPair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ResourceManager__CultureNameResourceSetPair()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::__ResourceManager__CultureNameResourceSetPair, 0x10>, "Size mismatch!");

} // namespace end def System::Resources
// Type: ::ResourceManagerMediator
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3437))
// CS Name: ::ResourceManager::ResourceManagerMediator*
class CORDL_TYPE __ResourceManager__ResourceManagerMediator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _rm offset 0x10
 __declspec(property(get=__get__rm, put=__set__rm)) ::System::Resources::ResourceManager*  _rm;

constexpr void __set__rm(::System::Resources::ResourceManager*  value) ;

constexpr ::System::Resources::ResourceManager* __get__rm() ;

constexpr ::cordl_internals::to_const_pointer<::System::Resources::ResourceManager*> __get__rm() const;

static inline ::System::Resources::__ResourceManager__ResourceManagerMediator* New_ctor(::System::Resources::ResourceManager*  rm) ;

/// @brief Method .ctor addr 0x24e1590 size 0x78 virtual false final false
inline void _ctor(::System::Resources::ResourceManager*  rm) ;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__ResourceManagerMediator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ResourceManager__ResourceManagerMediator(__ResourceManager__ResourceManagerMediator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__ResourceManagerMediator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ResourceManager__ResourceManagerMediator(__ResourceManager__ResourceManagerMediator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ResourceManager__ResourceManagerMediator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::__ResourceManager__ResourceManagerMediator, 0x18>, "Size mismatch!");

} // namespace end def System::Resources
// Type: System.Resources::ResourceManager
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3438))
// CS Name: ::System.Resources::ResourceManager*
class CORDL_TYPE ResourceManager : public ::System::Object {
public:
// Declarations
using ResourceManagerMediator = ::System::Resources::__ResourceManager__ResourceManagerMediator;

using CultureNameResourceSetPair = ::System::Resources::__ResourceManager__CultureNameResourceSetPair;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field ResourceSets offset 0x10
 __declspec(property(get=__get_ResourceSets, put=__set_ResourceSets)) ::System::Collections::Hashtable*  ResourceSets;

/// @brief Field _resourceSets offset 0x18
 __declspec(property(get=__get__resourceSets, put=__set__resourceSets)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>*  _resourceSets;

/// @brief Field MainAssembly offset 0x20
 __declspec(property(get=__get_MainAssembly, put=__set_MainAssembly)) ::System::Reflection::Assembly*  MainAssembly;

/// @brief Field _neutralResourcesCulture offset 0x28
 __declspec(property(get=__get__neutralResourcesCulture, put=__set__neutralResourcesCulture)) ::System::Globalization::CultureInfo*  _neutralResourcesCulture;

/// @brief Field _lastUsedResourceCache offset 0x30
 __declspec(property(get=__get__lastUsedResourceCache, put=__set__lastUsedResourceCache)) ::System::Resources::__ResourceManager__CultureNameResourceSetPair*  _lastUsedResourceCache;

/// @brief Field UseManifest offset 0x38
 __declspec(property(get=__get_UseManifest, put=__set_UseManifest)) bool  UseManifest;

/// @brief Field UseSatelliteAssem offset 0x39
 __declspec(property(get=__get_UseSatelliteAssem, put=__set_UseSatelliteAssem)) bool  UseSatelliteAssem;

/// @brief Field _fallbackLoc offset 0x3c
 __declspec(property(get=__get__fallbackLoc, put=__set__fallbackLoc)) ::System::Resources::UltimateResourceFallbackLocation  _fallbackLoc;

/// @brief Field _callingAssembly offset 0x40
 __declspec(property(get=__get__callingAssembly, put=__set__callingAssembly)) ::System::Reflection::Assembly*  _callingAssembly;

/// @brief Field m_callingAssembly offset 0x48
 __declspec(property(get=__get_m_callingAssembly, put=__set_m_callingAssembly)) ::System::Reflection::RuntimeAssembly*  m_callingAssembly;

/// @brief Field resourceGroveler offset 0x50
 __declspec(property(get=__get_resourceGroveler, put=__set_resourceGroveler)) ::System::Resources::IResourceGroveler*  resourceGroveler;

constexpr void __set_ResourceSets(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_ResourceSets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_ResourceSets() const;

constexpr void __set__resourceSets(::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>* __get__resourceSets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceSet*>*> __get__resourceSets() const;

constexpr void __set_MainAssembly(::System::Reflection::Assembly*  value) ;

constexpr ::System::Reflection::Assembly* __get_MainAssembly() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> __get_MainAssembly() const;

constexpr void __set__neutralResourcesCulture(::System::Globalization::CultureInfo*  value) ;

constexpr ::System::Globalization::CultureInfo* __get__neutralResourcesCulture() ;

constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> __get__neutralResourcesCulture() const;

constexpr void __set__lastUsedResourceCache(::System::Resources::__ResourceManager__CultureNameResourceSetPair*  value) ;

constexpr ::System::Resources::__ResourceManager__CultureNameResourceSetPair* __get__lastUsedResourceCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Resources::__ResourceManager__CultureNameResourceSetPair*> __get__lastUsedResourceCache() const;

constexpr void __set_UseManifest(bool  value) ;

constexpr bool& __get_UseManifest() ;

constexpr bool const& __get_UseManifest() const;

constexpr void __set_UseSatelliteAssem(bool  value) ;

constexpr bool& __get_UseSatelliteAssem() ;

constexpr bool const& __get_UseSatelliteAssem() const;

constexpr void __set__fallbackLoc(::System::Resources::UltimateResourceFallbackLocation  value) ;

constexpr ::System::Resources::UltimateResourceFallbackLocation& __get__fallbackLoc() ;

constexpr ::System::Resources::UltimateResourceFallbackLocation const& __get__fallbackLoc() const;

constexpr void __set__callingAssembly(::System::Reflection::Assembly*  value) ;

constexpr ::System::Reflection::Assembly* __get__callingAssembly() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> __get__callingAssembly() const;

constexpr void __set_m_callingAssembly(::System::Reflection::RuntimeAssembly*  value) ;

constexpr ::System::Reflection::RuntimeAssembly* __get_m_callingAssembly() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::RuntimeAssembly*> __get_m_callingAssembly() const;

constexpr void __set_resourceGroveler(::System::Resources::IResourceGroveler*  value) ;

constexpr ::System::Resources::IResourceGroveler* __get_resourceGroveler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Resources::IResourceGroveler*> __get_resourceGroveler() const;

static inline void setStaticF_MagicNumber(int32_t  value) ;

static inline int32_t getStaticF_MagicNumber() ;

static inline void setStaticF_HeaderVersionNumber(int32_t  value) ;

static inline int32_t getStaticF_HeaderVersionNumber() ;

static inline void setStaticF__minResourceSet(::System::Type*  value) ;

static inline ::System::Type* getStaticF__minResourceSet() ;

static inline void setStaticF_ResReaderTypeName(::StringW  value) ;

static inline ::StringW getStaticF_ResReaderTypeName() ;

static inline void setStaticF_ResSetTypeName(::StringW  value) ;

static inline ::StringW getStaticF_ResSetTypeName() ;

static inline void setStaticF_MscorlibName(::StringW  value) ;

static inline ::StringW getStaticF_MscorlibName() ;

static inline void setStaticF_DEBUG(int32_t  value) ;

static inline int32_t getStaticF_DEBUG() ;

/// @brief Method Init addr 0x24e1398 size 0x118 virtual false final false
inline void Init() ;

static inline ::System::Resources::ResourceManager* New_ctor() ;

/// @brief Method .ctor addr 0x24e14b4 size 0xd4 virtual false final false
inline void _ctor() ;

/// @brief Method OnDeserializing addr 0x24e1608 size 0x10 virtual false final false
inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext  ctx) ;

/// @brief Method OnDeserialized addr 0x24e1618 size 0x1cc virtual false final false
inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext  ctx) ;

/// @brief Method OnSerializing addr 0x24e17e4 size 0x70 virtual false final false
inline void OnSerializing(::System::Runtime::Serialization::StreamingContext  ctx) ;

/// @brief Method CompareNames addr 0x24e1854 size 0x254 virtual false final false
static inline bool CompareNames(::StringW  asmTypeName1, ::StringW  typeName2, ::System::Reflection::AssemblyName*  asmName2) ;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResourceManager(ResourceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResourceManager(ResourceManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ResourceManager()  = default;
public:


// Fields

// Static field MagicNumber

// Static field HeaderVersionNumber

// Static field _minResourceSet

// Static field ResReaderTypeName

// Static field ResSetTypeName

// Static field MscorlibName

// Static field DEBUG


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::ResourceManager, 0x58>, "Size mismatch!");

} // namespace end def System::Resources
NEED_NO_BOX(::System::Resources::ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceManager*, "System.Resources", "ResourceManager");
NEED_NO_BOX(::System::Resources::__ResourceManager__CultureNameResourceSetPair);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::__ResourceManager__CultureNameResourceSetPair*, "System.Resources", "ResourceManager/CultureNameResourceSetPair");
NEED_NO_BOX(::System::Resources::__ResourceManager__ResourceManagerMediator);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::__ResourceManager__ResourceManagerMediator*, "System.Resources", "ResourceManager/ResourceManagerMediator");
