#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NormalizeProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class NormalizeProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::NormalizeProcessor);
// Type: UnityEngine.InputSystem.Processors::NormalizeProcessor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 391 }), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6587))
// CS Name: ::UnityEngine.InputSystem.Processors::NormalizeProcessor*
class CORDL_TYPE NormalizeProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::InputSystem::InputProcessor_1<float_t>)]{};

/// @brief Field min offset 0x10
 __declspec(property(get=__get_min, put=__set_min)) float_t  min;

/// @brief Field max offset 0x14
 __declspec(property(get=__get_max, put=__set_max)) float_t  max;

/// @brief Field zero offset 0x18
 __declspec(property(get=__get_zero, put=__set_zero)) float_t  zero;

constexpr void __set_min(float_t  value) ;

constexpr float_t& __get_min() ;

constexpr float_t const& __get_min() const;

constexpr void __set_max(float_t  value) ;

constexpr float_t& __get_max() ;

constexpr float_t const& __get_max() const;

constexpr void __set_zero(float_t  value) ;

constexpr float_t& __get_zero() ;

constexpr float_t const& __get_zero() const;

/// @brief Method Process addr 0x2af9648 size 0xc virtual true final false
inline float_t Process(float_t  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Normalize addr 0x2af9654 size 0xd0 virtual false final false
static inline float_t Normalize(float_t  value, float_t  min, float_t  max, float_t  zero) ;

/// @brief Method Denormalize addr 0x2af9724 size 0x48 virtual false final false
static inline float_t Denormalize(float_t  value, float_t  min, float_t  max, float_t  zero) ;

/// @brief Method ToString addr 0x2af976c size 0xc4 virtual true final false
inline ::StringW ToString() ;

static inline ::UnityEngine::InputSystem::Processors::NormalizeProcessor* New_ctor() ;

/// @brief Method .ctor addr 0x2af9830 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NormalizeProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NormalizeProcessor(NormalizeProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NormalizeProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NormalizeProcessor(NormalizeProcessor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NormalizeProcessor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::NormalizeProcessor, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::NormalizeProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::NormalizeProcessor*, "UnityEngine.InputSystem.Processors", "NormalizeProcessor");
