#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaselineFunction)
namespace System {
class Object;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class BaselineFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::BaselineFunction);
// Type: UnityEngine.Yoga::BaselineFunction
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15372))
// CS Name: ::UnityEngine.Yoga::BaselineFunction*
class CORDL_TYPE BaselineFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Yoga::BaselineFunction* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2ea5460 size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2ea5590 size 0x14 virtual true final false
inline float_t Invoke(::UnityEngine::Yoga::YogaNode*  node, float_t  width, float_t  height) ;

// Ctor Parameters [CppParam { name: "", ty: "BaselineFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaselineFunction(BaselineFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaselineFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaselineFunction(BaselineFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaselineFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::BaselineFunction, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::BaselineFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::BaselineFunction*, "UnityEngine.Yoga", "BaselineFunction");
