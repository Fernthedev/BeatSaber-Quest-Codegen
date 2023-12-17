#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GridLayout_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(Grid)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Grid;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Grid);
// Type: UnityEngine::Grid
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16183))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16184))
// CS Name: ::UnityEngine::Grid*
class CORDL_TYPE Grid : public ::UnityEngine::GridLayout {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::GridLayout)]{};

 __declspec(property(get=get_cellSize)) ::UnityEngine::Vector3  cellSize;

/// @brief Method get_cellSize addr 0x2cfafc4 size 0x5c virtual false final false
inline ::UnityEngine::Vector3 get_cellSize() ;

static inline ::UnityEngine::Grid* New_ctor() ;

/// @brief Method .ctor addr 0x2cfb064 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method get_cellSize_Injected addr 0x2cfb020 size 0x44 virtual false final false
inline void get_cellSize_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

// Ctor Parameters [CppParam { name: "", ty: "Grid", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Grid(Grid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Grid", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Grid(Grid const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Grid()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Grid, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Grid);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Grid*, "UnityEngine", "Grid");
