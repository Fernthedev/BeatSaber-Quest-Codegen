#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleProperty)
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleProperty;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleProperty);
// Type: UnityEngine.UIElements::StyleProperty
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7262))
// CS Name: ::UnityEngine.UIElements::StyleProperty*
class CORDL_TYPE StyleProperty : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_Name offset 0x10
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::StringW  m_Name;

/// @brief Field m_Line offset 0x18
 __declspec(property(get=__get_m_Line, put=__set_m_Line)) int32_t  m_Line;

/// @brief Field m_Values offset 0x20
 __declspec(property(get=__get_m_Values, put=__set_m_Values)) ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  m_Values;

/// @brief Field isCustomProperty offset 0x28
 __declspec(property(get=__get_isCustomProperty, put=__set_isCustomProperty)) bool  isCustomProperty;

/// @brief Field requireVariableResolve offset 0x29
 __declspec(property(get=__get_requireVariableResolve, put=__set_requireVariableResolve)) bool  requireVariableResolve;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_values)) ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  values;

constexpr void __set_m_Name(::StringW  value) ;

constexpr ::StringW& __get_m_Name() ;

constexpr ::StringW const& __get_m_Name() const;

constexpr void __set_m_Line(int32_t  value) ;

constexpr int32_t& __get_m_Line() ;

constexpr int32_t const& __get_m_Line() const;

constexpr void __set_m_Values(::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>& __get_m_Values() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*> const& __get_m_Values() const;

constexpr void __set_isCustomProperty(bool  value) ;

constexpr bool& __get_isCustomProperty() ;

constexpr bool const& __get_isCustomProperty() const;

constexpr void __set_requireVariableResolve(bool  value) ;

constexpr bool& __get_requireVariableResolve() ;

constexpr bool const& __get_requireVariableResolve() const;

/// @brief Method get_name addr 0x2e69970 size 0x8 virtual false final false
inline ::StringW get_name() ;

/// @brief Method get_values addr 0x2e69978 size 0x8 virtual false final false
inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*> get_values() ;

static inline ::UnityEngine::UIElements::StyleProperty* New_ctor() ;

/// @brief Method .ctor addr 0x2e69980 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StyleProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleProperty(StyleProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleProperty(StyleProperty const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StyleProperty()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleProperty, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleProperty*, "UnityEngine.UIElements", "StyleProperty");
