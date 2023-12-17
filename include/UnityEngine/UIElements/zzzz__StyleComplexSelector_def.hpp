#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleComplexSelector)
namespace UnityEngine::UIElements {
struct __StyleComplexSelector__PseudoStateData;
}
namespace UnityEngine::UIElements {
class __StyleComplexSelector____c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements {
struct PseudoStates;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class __StyleComplexSelector____c;
}
namespace UnityEngine::UIElements {
struct __StyleComplexSelector__PseudoStateData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleComplexSelector);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StyleComplexSelector____c);
MARK_VAL_T(::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData);
// Type: ::PseudoStateData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7259))
// CS Name: ::StyleComplexSelector::PseudoStateData
struct CORDL_TYPE __StyleComplexSelector__PseudoStateData : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field state offset 0x0
 __declspec(property(get=__get_state, put=__set_state)) ::UnityEngine::UIElements::PseudoStates  state;

/// @brief Field negate offset 0x4
 __declspec(property(get=__get_negate, put=__set_negate)) bool  negate;

constexpr void __set_state(::UnityEngine::UIElements::PseudoStates  value) ;

constexpr ::UnityEngine::UIElements::PseudoStates& __get_state() ;

constexpr ::UnityEngine::UIElements::PseudoStates const& __get_state() const;

constexpr void __set_negate(bool  value) ;

constexpr bool& __get_negate() ;

constexpr bool const& __get_negate() const;

/// @brief Method .ctor addr 0x2e698d4 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::UIElements::PseudoStates  state, bool  negate) ;

// Ctor Parameters [CppParam { name: "state", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None }, CppParam { name: "negate", ty: "bool", modifiers: "", def_value: None }]
constexpr __StyleComplexSelector__PseudoStateData(::UnityEngine::UIElements::PseudoStates  state, bool  negate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StyleComplexSelector__PseudoStateData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StyleComplexSelector__PseudoStateData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7260))
// CS Name: ::StyleComplexSelector::<>c*
class CORDL_TYPE __StyleComplexSelector____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::UIElements::__StyleComplexSelector____c*  value) ;

static inline ::UnityEngine::UIElements::__StyleComplexSelector____c* getStaticF___9() ;

static inline void setStaticF___9__20_0(::System::Func_2<::UnityEngine::UIElements::StyleSelector*,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::UIElements::StyleSelector*,::StringW>* getStaticF___9__20_0() ;

static inline ::UnityEngine::UIElements::__StyleComplexSelector____c* New_ctor() ;

/// @brief Method .ctor addr 0x2e69948 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ToString>b__20_0 addr 0x2e69950 size 0x20 virtual false final false
inline ::StringW _ToString_b__20_0(::UnityEngine::UIElements::StyleSelector*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__StyleComplexSelector____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StyleComplexSelector____c(__StyleComplexSelector____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StyleComplexSelector____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StyleComplexSelector____c(__StyleComplexSelector____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StyleComplexSelector____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__20_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleComplexSelector____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleComplexSelector
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7261))
// CS Name: ::UnityEngine.UIElements::StyleComplexSelector*
class CORDL_TYPE StyleComplexSelector : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__StyleComplexSelector____c;

using PseudoStateData = ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field m_Specificity offset 0x10
 __declspec(property(get=__get_m_Specificity, put=__set_m_Specificity)) int32_t  m_Specificity;

/// @brief Field <rule>k__BackingField offset 0x18
 __declspec(property(get=__get__rule_k__BackingField, put=__set__rule_k__BackingField)) ::UnityEngine::UIElements::StyleRule*  _rule_k__BackingField;

/// @brief Field m_Selectors offset 0x20
 __declspec(property(get=__get_m_Selectors, put=__set_m_Selectors)) ::ArrayW<::UnityEngine::UIElements::StyleSelector*,::Array<::UnityEngine::UIElements::StyleSelector*>*>  m_Selectors;

/// @brief Field ruleIndex offset 0x28
 __declspec(property(get=__get_ruleIndex, put=__set_ruleIndex)) int32_t  ruleIndex;

/// @brief Field nextInTable offset 0x30
 __declspec(property(get=__get_nextInTable, put=__set_nextInTable)) ::UnityEngine::UIElements::StyleComplexSelector*  nextInTable;

/// @brief Field orderInStyleSheet offset 0x38
 __declspec(property(get=__get_orderInStyleSheet, put=__set_orderInStyleSheet)) int32_t  orderInStyleSheet;

 __declspec(property(get=get_specificity)) int32_t  specificity;

 __declspec(property(get=get_rule, put=set_rule)) ::UnityEngine::UIElements::StyleRule*  rule;

 __declspec(property(get=get_selectors, put=set_selectors)) ::ArrayW<::UnityEngine::UIElements::StyleSelector*,::Array<::UnityEngine::UIElements::StyleSelector*>*>  selectors;

constexpr void __set_m_Specificity(int32_t  value) ;

constexpr int32_t& __get_m_Specificity() ;

constexpr int32_t const& __get_m_Specificity() const;

constexpr void __set__rule_k__BackingField(::UnityEngine::UIElements::StyleRule*  value) ;

constexpr ::UnityEngine::UIElements::StyleRule* __get__rule_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleRule*> __get__rule_k__BackingField() const;

constexpr void __set_m_Selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*,::Array<::UnityEngine::UIElements::StyleSelector*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelector*,::Array<::UnityEngine::UIElements::StyleSelector*>*>& __get_m_Selectors() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelector*,::Array<::UnityEngine::UIElements::StyleSelector*>*> const& __get_m_Selectors() const;

constexpr void __set_ruleIndex(int32_t  value) ;

constexpr int32_t& __get_ruleIndex() ;

constexpr int32_t const& __get_ruleIndex() const;

constexpr void __set_nextInTable(::UnityEngine::UIElements::StyleComplexSelector*  value) ;

constexpr ::UnityEngine::UIElements::StyleComplexSelector* __get_nextInTable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleComplexSelector*> __get_nextInTable() const;

constexpr void __set_orderInStyleSheet(int32_t  value) ;

constexpr int32_t& __get_orderInStyleSheet() ;

constexpr int32_t const& __get_orderInStyleSheet() const;

static inline void setStaticF_s_PseudoStates(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>* getStaticF_s_PseudoStates() ;

/// @brief Method get_specificity addr 0x2e53828 size 0x8 virtual false final false
inline int32_t get_specificity() ;

/// @brief Method get_rule addr 0x2e53830 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::StyleRule* get_rule() ;

/// @brief Method set_rule addr 0x2e53838 size 0x8 virtual false final false
inline void set_rule(::UnityEngine::UIElements::StyleRule*  value) ;

/// @brief Method get_selectors addr 0x2e53840 size 0x8 virtual false final false
inline ::ArrayW<::UnityEngine::UIElements::StyleSelector*,::Array<::UnityEngine::UIElements::StyleSelector*>*> get_selectors() ;

/// @brief Method set_selectors addr 0x2e53848 size 0x8 virtual false final false
inline void set_selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*,::Array<::UnityEngine::UIElements::StyleSelector*>*>  value) ;

/// @brief Method CachePseudoStateMasks addr 0x2e53850 size 0x5d0 virtual false final false
inline void CachePseudoStateMasks() ;

/// @brief Method ToString addr 0x2e53e20 size 0x170 virtual true final false
inline ::StringW ToString() ;

static inline ::UnityEngine::UIElements::StyleComplexSelector* New_ctor() ;

/// @brief Method .ctor addr 0x2e53f90 size 0x1008 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleComplexSelector(StyleComplexSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleComplexSelector(StyleComplexSelector const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StyleComplexSelector()  = default;
public:


// Fields

// Static field s_PseudoStates


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleComplexSelector, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleComplexSelector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleComplexSelector*, "UnityEngine.UIElements", "StyleComplexSelector");
NEED_NO_BOX(::UnityEngine::UIElements::__StyleComplexSelector____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleComplexSelector____c*, "UnityEngine.UIElements", "StyleComplexSelector/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData, "UnityEngine.UIElements", "StyleComplexSelector/PseudoStateData");
