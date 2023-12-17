#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LegacyResourcesLocator)
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class LegacyResourcesLocator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator);
// Type: UnityEngine.AddressableAssets.ResourceLocators::LegacyResourcesLocator
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14113))
// CS Name: ::UnityEngine.AddressableAssets.ResourceLocators::LegacyResourcesLocator*
class CORDL_TYPE LegacyResourcesLocator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::IEnumerable_1<::System::Object*>*  Keys;

 __declspec(property(get=get_LocatorId)) ::StringW  LocatorId;

/// @brief Convert operator to "::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator"
constexpr operator  ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*() noexcept;

/// @brief Method Locate addr 0x2a2e694 size 0x274 virtual true final true
inline bool Locate(::System::Object*  key, ::System::Type*  type, ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  locations) ;

/// @brief Method get_Keys addr 0x2a2e908 size 0x8 virtual true final true
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_Keys() ;

/// @brief Method get_LocatorId addr 0x2a2e910 size 0x40 virtual true final true
inline ::StringW get_LocatorId() ;

static inline ::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator* New_ctor() ;

/// @brief Method .ctor addr 0x2a2e950 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesLocator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyResourcesLocator(LegacyResourcesLocator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesLocator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyResourcesLocator(LegacyResourcesLocator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LegacyResourcesLocator()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator*, "UnityEngine.AddressableAssets.ResourceLocators", "LegacyResourcesLocator");
