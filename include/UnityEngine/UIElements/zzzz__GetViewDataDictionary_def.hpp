#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetViewDataDictionary)
namespace UnityEngine::UIElements {
class ISerializableJsonDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GetViewDataDictionary;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GetViewDataDictionary);
// Type: UnityEngine.UIElements::GetViewDataDictionary
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6873))
// CS Name: ::UnityEngine.UIElements::GetViewDataDictionary*
class CORDL_TYPE GetViewDataDictionary : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::UIElements::GetViewDataDictionary* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2dc9a04 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2dc9ac0 size 0x14 virtual true final false
inline ::UnityEngine::UIElements::ISerializableJsonDictionary* Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "GetViewDataDictionary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GetViewDataDictionary(GetViewDataDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetViewDataDictionary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetViewDataDictionary(GetViewDataDictionary const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GetViewDataDictionary()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GetViewDataDictionary, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GetViewDataDictionary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GetViewDataDictionary*, "UnityEngine.UIElements", "GetViewDataDictionary");
