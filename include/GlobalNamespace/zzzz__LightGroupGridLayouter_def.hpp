#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupGridLayouter)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupGridLayouter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupGridLayouter);
// Type: ::LightGroupGridLayouter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4935))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4930))
// CS Name: ::LightGroupGridLayouter*
class CORDL_TYPE LightGroupGridLayouter : public ::GlobalNamespace::LightGroupSubsystem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::LightGroupSubsystem)]{};

/// @brief Field _columns offset 0x20
 __declspec(property(get=__get__columns, put=__set__columns)) int32_t  _columns;

/// @brief Field _columnStep offset 0x24
 __declspec(property(get=__get__columnStep, put=__set__columnStep)) ::UnityEngine::Vector3  _columnStep;

/// @brief Field _columnsFromCenter offset 0x30
 __declspec(property(get=__get__columnsFromCenter, put=__set__columnsFromCenter)) bool  _columnsFromCenter;

/// @brief Field _rowStep offset 0x34
 __declspec(property(get=__get__rowStep, put=__set__rowStep)) ::UnityEngine::Vector3  _rowStep;

/// @brief Field _rowsFromCenter offset 0x40
 __declspec(property(get=__get__rowsFromCenter, put=__set__rowsFromCenter)) bool  _rowsFromCenter;

/// @brief Field _transposeOrder offset 0x41
 __declspec(property(get=__get__transposeOrder, put=__set__transposeOrder)) bool  _transposeOrder;

/// @brief Field _alternateOrder offset 0x42
 __declspec(property(get=__get__alternateOrder, put=__set__alternateOrder)) bool  _alternateOrder;

/// @brief Field _defaultRotation offset 0x44
 __declspec(property(get=__get__defaultRotation, put=__set__defaultRotation)) ::UnityEngine::Vector3  _defaultRotation;

constexpr void __set__columns(int32_t  value) ;

constexpr int32_t& __get__columns() ;

constexpr int32_t const& __get__columns() const;

constexpr void __set__columnStep(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__columnStep() ;

constexpr ::UnityEngine::Vector3 const& __get__columnStep() const;

constexpr void __set__columnsFromCenter(bool  value) ;

constexpr bool& __get__columnsFromCenter() ;

constexpr bool const& __get__columnsFromCenter() const;

constexpr void __set__rowStep(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__rowStep() ;

constexpr ::UnityEngine::Vector3 const& __get__rowStep() const;

constexpr void __set__rowsFromCenter(bool  value) ;

constexpr bool& __get__rowsFromCenter() ;

constexpr bool const& __get__rowsFromCenter() const;

constexpr void __set__transposeOrder(bool  value) ;

constexpr bool& __get__transposeOrder() ;

constexpr bool const& __get__transposeOrder() const;

constexpr void __set__alternateOrder(bool  value) ;

constexpr bool& __get__alternateOrder() ;

constexpr bool const& __get__alternateOrder() const;

constexpr void __set__defaultRotation(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__defaultRotation() ;

constexpr ::UnityEngine::Vector3 const& __get__defaultRotation() const;

static inline ::GlobalNamespace::LightGroupGridLayouter* New_ctor() ;

/// @brief Method .ctor addr 0x23a9898 size 0x88 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupGridLayouter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightGroupGridLayouter(LightGroupGridLayouter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupGridLayouter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightGroupGridLayouter(LightGroupGridLayouter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightGroupGridLayouter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupGridLayouter, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupGridLayouter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupGridLayouter*, "", "LightGroupGridLayouter");
