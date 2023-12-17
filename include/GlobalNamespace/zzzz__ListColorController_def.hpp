#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IncDecColorController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListColorController)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ListColorController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ListColorController);
// Type: ::ListColorController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16146))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16148))
// CS Name: ::ListColorController*
class CORDL_TYPE ListColorController : public ::GlobalNamespace::IncDecColorController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::IncDecColorController)]{};

/// @brief Field _idx offset 0x20
 __declspec(property(get=__get__idx, put=__set__idx)) int32_t  _idx;

/// @brief Field _numberOfElements offset 0x24
 __declspec(property(get=__get__numberOfElements, put=__set__numberOfElements)) int32_t  _numberOfElements;

constexpr void __set__idx(int32_t  value) ;

constexpr int32_t& __get__idx() ;

constexpr int32_t const& __get__idx() const;

constexpr void __set__numberOfElements(int32_t  value) ;

constexpr int32_t& __get__numberOfElements() ;

constexpr int32_t const& __get__numberOfElements() const;

/// @brief Method GetInitValues addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements) ;

/// @brief Method ApplyValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ApplyValue(int32_t  idx) ;

/// @brief Method ColorForValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Color ColorForValue(int32_t  idx) ;

/// @brief Method OnEnable addr 0x23e4f0c size 0x34 virtual false final false
inline void OnEnable() ;

/// @brief Method RefreshUI addr 0x23e4f40 size 0x50 virtual false final false
inline void RefreshUI() ;

/// @brief Method Refresh addr 0x23e4f90 size 0x5c virtual false final false
inline void Refresh(bool  applyValue) ;

/// @brief Method IncButtonPressed addr 0x23e4fec size 0x40 virtual true final false
inline void IncButtonPressed() ;

/// @brief Method DecButtonPressed addr 0x23e502c size 0x38 virtual true final false
inline void DecButtonPressed() ;

static inline ::GlobalNamespace::ListColorController* New_ctor() ;

/// @brief Method .ctor addr 0x23e5064 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ListColorController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListColorController(ListColorController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListColorController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListColorController(ListColorController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ListColorController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ListColorController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ListColorController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListColorController*, "", "ListColorController");
