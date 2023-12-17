#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(FloorLightTileInstaller)
namespace Ice {
class FloorLightTile;
}
// Forward declare root types
namespace Ice {
class FloorLightTileInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Ice::FloorLightTileInstaller);
// Type: Ice::FloorLightTileInstaller
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11147))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16169))
// CS Name: ::Ice::FloorLightTileInstaller*
class CORDL_TYPE FloorLightTileInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::ScriptableObjectInstaller)]{};

/// @brief Field _floorLightTilePrefab offset 0x20
 __declspec(property(get=__get__floorLightTilePrefab, put=__set__floorLightTilePrefab)) ::Ice::FloorLightTile*  _floorLightTilePrefab;

constexpr void __set__floorLightTilePrefab(::Ice::FloorLightTile*  value) ;

constexpr ::Ice::FloorLightTile* __get__floorLightTilePrefab() ;

constexpr ::cordl_internals::to_const_pointer<::Ice::FloorLightTile*> __get__floorLightTilePrefab() const;

/// @brief Method InstallBindings addr 0x129fce4 size 0x84 virtual true final false
inline void InstallBindings() ;

static inline ::Ice::FloorLightTileInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x129fd68 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightTileInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloorLightTileInstaller(FloorLightTileInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightTileInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloorLightTileInstaller(FloorLightTileInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloorLightTileInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::FloorLightTileInstaller, 0x28>, "Size mismatch!");

} // namespace end def Ice
NEED_NO_BOX(::Ice::FloorLightTileInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTileInstaller*, "Ice", "FloorLightTileInstaller");
