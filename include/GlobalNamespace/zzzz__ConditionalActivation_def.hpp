#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConditionalActivation)
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalActivation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConditionalActivation);
// Type: ::ConditionalActivation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5352))
// CS Name: ::ConditionalActivation*
class CORDL_TYPE ConditionalActivation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _value offset 0x18
 __declspec(property(get=__get__value, put=__set__value)) ::GlobalNamespace::BoolSO*  _value;

/// @brief Field _activateOnFalse offset 0x20
 __declspec(property(get=__get__activateOnFalse, put=__set__activateOnFalse)) bool  _activateOnFalse;

constexpr void __set__value(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get__value() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get__value() const;

constexpr void __set__activateOnFalse(bool  value) ;

constexpr bool& __get__activateOnFalse() ;

constexpr bool const& __get__activateOnFalse() const;

/// @brief Method Awake addr 0x226bf2c size 0x84 virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::ConditionalActivation* New_ctor() ;

/// @brief Method .ctor addr 0x226bfb0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalActivation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConditionalActivation(ConditionalActivation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalActivation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConditionalActivation(ConditionalActivation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConditionalActivation()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalActivation, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalActivation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalActivation*, "", "ConditionalActivation");
