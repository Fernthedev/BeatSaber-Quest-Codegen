#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureEventBase_1)
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class MouseCaptureEventBase_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class MouseCaptureEventBase_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureEventBase_1);
// Type: UnityEngine.UIElements::MouseCaptureEventBase`1
// Type: UnityEngine.UIElements::MouseCaptureEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7153)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7150), inst: 4634 }), TypeDefinitionIndex(TypeDefinitionIndex(7150))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7153), inst: 2 })
// CS Name: ::UnityEngine.UIElements::MouseCaptureEventBase`1<T>*
class CORDL_TYPE MouseCaptureEventBase_1<T> : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::PointerCaptureEventBase_1<T>)]{};

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

static inline ::UnityEngine::UIElements::MouseCaptureEventBase_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEventBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseCaptureEventBase_1(MouseCaptureEventBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEventBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseCaptureEventBase_1(MouseCaptureEventBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MouseCaptureEventBase_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::MouseCaptureEventBase_1, "UnityEngine.UIElements", "MouseCaptureEventBase`1");
