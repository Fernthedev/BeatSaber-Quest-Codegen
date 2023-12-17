#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
CORDL_MODULE_EXPORT(SelectableStateController_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class SelectableStateController_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class SelectableStateController_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SelectableStateController_1);
// Type: ::SelectableStateController`1
// Type: ::SelectableStateController`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5457)), TypeDefinitionIndex(TypeDefinitionIndex(5456))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5457), inst: 2 })
// CS Name: ::SelectableStateController`1<T>*
class CORDL_TYPE SelectableStateController_1<T> : public ::GlobalNamespace::SelectableStateController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::SelectableStateController)]{};

/// @brief Field _component offset 0x30
 __declspec(property(get=__get__component, put=__set__component)) T  _component;

constexpr void __set__component(T  value) ;

constexpr T& __get__component() ;

constexpr T const& __get__component() const;

static inline ::GlobalNamespace::SelectableStateController_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SelectableStateController_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectableStateController_1(SelectableStateController_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectableStateController_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectableStateController_1(SelectableStateController_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectableStateController_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SelectableStateController_1, "", "SelectableStateController`1");
