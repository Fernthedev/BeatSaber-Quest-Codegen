#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LinkedPoolItem_1)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class LinkedPoolItem_1;
}
namespace UnityEngine::UIElements::UIR {
template<::il2cpp_utils::il2cpp_reference_type T>
class LinkedPoolItem_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::LinkedPoolItem_1);
// Type: UnityEngine.UIElements.UIR::LinkedPoolItem`1
// Type: UnityEngine.UIElements.UIR::LinkedPoolItem`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7399)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7399), inst: 2 })
// CS Name: ::UnityEngine.UIElements.UIR::LinkedPoolItem`1<T>*
class CORDL_TYPE LinkedPoolItem_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field poolNext offset 0x10
 __declspec(property(get=__get_poolNext, put=__set_poolNext)) T  poolNext;

constexpr void __set_poolNext(T  value) ;

constexpr T& __get_poolNext() ;

constexpr T const& __get_poolNext() const;

static inline ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedPoolItem_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedPoolItem_1(LinkedPoolItem_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedPoolItem_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedPoolItem_1(LinkedPoolItem_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedPoolItem_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::LinkedPoolItem_1, "UnityEngine.UIElements.UIR", "LinkedPoolItem`1");
