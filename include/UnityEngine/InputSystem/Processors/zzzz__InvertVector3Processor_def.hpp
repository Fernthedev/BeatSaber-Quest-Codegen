#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvertVector3Processor)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class InvertVector3Processor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::InvertVector3Processor);
// Type: UnityEngine.InputSystem.Processors::InvertVector3Processor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 412 }), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6586))
// CS Name: ::UnityEngine.InputSystem.Processors::InvertVector3Processor*
class CORDL_TYPE InvertVector3Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>)]{};

/// @brief Field invertX offset 0x10
 __declspec(property(get=__get_invertX, put=__set_invertX)) bool  invertX;

/// @brief Field invertY offset 0x11
 __declspec(property(get=__get_invertY, put=__set_invertY)) bool  invertY;

/// @brief Field invertZ offset 0x12
 __declspec(property(get=__get_invertZ, put=__set_invertZ)) bool  invertZ;

constexpr void __set_invertX(bool  value) ;

constexpr bool& __get_invertX() ;

constexpr bool const& __get_invertX() const;

constexpr void __set_invertY(bool  value) ;

constexpr bool& __get_invertY() ;

constexpr bool const& __get_invertY() const;

constexpr void __set_invertZ(bool  value) ;

constexpr bool& __get_invertZ() ;

constexpr bool const& __get_invertZ() const;

/// @brief Method Process addr 0x2af94f8 size 0x34 virtual true final false
inline ::UnityEngine::Vector3 Process(::UnityEngine::Vector3  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ToString addr 0x2af952c size 0xc4 virtual true final false
inline ::StringW ToString() ;

static inline ::UnityEngine::InputSystem::Processors::InvertVector3Processor* New_ctor() ;

/// @brief Method .ctor addr 0x2af95f0 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InvertVector3Processor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvertVector3Processor(InvertVector3Processor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvertVector3Processor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvertVector3Processor(InvertVector3Processor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvertVector3Processor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::InvertVector3Processor, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::InvertVector3Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::InvertVector3Processor*, "UnityEngine.InputSystem.Processors", "InvertVector3Processor");
