#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleVariableResolver)
namespace UnityEngine::UIElements {
class StyleProperty;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct __StyleVariableResolver__ResolveContext;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::UIElements {
struct __StyleVariableResolver__Result;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class StyleSyntaxParser;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyValueMatcher;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __StyleVariableResolver__Result;
}
namespace UnityEngine::UIElements {
class StyleVariableResolver;
}
namespace UnityEngine::UIElements {
struct __StyleVariableResolver__ResolveContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__StyleVariableResolver__Result);
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleVariableResolver);
MARK_VAL_T(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext);
// Type: ::Result
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7267))
// CS Name: ::StyleVariableResolver::Result
struct CORDL_TYPE __StyleVariableResolver__Result : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____StyleVariableResolver__Result_Unwrapped
enum struct ____StyleVariableResolver__Result_Unwrapped : int32_t {
__E_Valid = static_cast<int32_t>(0x0),
__E_Invalid = static_cast<int32_t>(0x1),
__E_NotFound = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Valid value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::__StyleVariableResolver__Result const Valid;

/// @brief Field Invalid value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::__StyleVariableResolver__Result const Invalid;

/// @brief Field NotFound value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::__StyleVariableResolver__Result const NotFound;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____StyleVariableResolver__Result_Unwrapped () const noexcept {
return std::bit_cast<____StyleVariableResolver__Result_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __StyleVariableResolver__Result(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StyleVariableResolver__Result(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StyleVariableResolver__Result()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleVariableResolver__Result, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::ResolveContext
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7268))
// CS Name: ::StyleVariableResolver::ResolveContext
struct CORDL_TYPE __StyleVariableResolver__ResolveContext : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field sheet offset 0x0
 __declspec(property(get=__get_sheet, put=__set_sheet)) ::UnityEngine::UIElements::StyleSheet*  sheet;

/// @brief Field handles offset 0x8
 __declspec(property(get=__get_handles, put=__set_handles)) ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  handles;

constexpr void __set_sheet(::UnityEngine::UIElements::StyleSheet*  value) ;

constexpr ::UnityEngine::UIElements::StyleSheet* __get_sheet() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> __get_sheet() const;

constexpr void __set_handles(::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>& __get_handles() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*> const& __get_handles() const;

// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: None }, CppParam { name: "handles", ty: "::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>", modifiers: "", def_value: None }]
constexpr __StyleVariableResolver__ResolveContext(::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  handles) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StyleVariableResolver__ResolveContext(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StyleVariableResolver__ResolveContext()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleVariableResolver
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7269))
// CS Name: ::UnityEngine.UIElements::StyleVariableResolver*
class CORDL_TYPE StyleVariableResolver : public ::System::Object {
public:
// Declarations
using ResolveContext = ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext;

using Result = ::UnityEngine::UIElements::__StyleVariableResolver__Result;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field kMaxResolves offset 0x0
static constexpr int32_t  kMaxResolves{static_cast<int32_t>(0x64)};

/// @brief Field m_Matcher offset 0x10
 __declspec(property(get=__get_m_Matcher, put=__set_m_Matcher)) ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*  m_Matcher;

/// @brief Field m_ResolvedValues offset 0x18
 __declspec(property(get=__get_m_ResolvedValues, put=__set_m_ResolvedValues)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*  m_ResolvedValues;

/// @brief Field m_ResolvedVarStack offset 0x20
 __declspec(property(get=__get_m_ResolvedVarStack, put=__set_m_ResolvedVarStack)) ::System::Collections::Generic::Stack_1<::StringW>*  m_ResolvedVarStack;

/// @brief Field m_Property offset 0x28
 __declspec(property(get=__get_m_Property, put=__set_m_Property)) ::UnityEngine::UIElements::StyleProperty*  m_Property;

/// @brief Field m_ContextStack offset 0x30
 __declspec(property(get=__get_m_ContextStack, put=__set_m_ContextStack)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*  m_ContextStack;

/// @brief Field m_CurrentContext offset 0x38
 __declspec(property(get=__get_m_CurrentContext, put=__set_m_CurrentContext)) ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext  m_CurrentContext;

/// @brief Field <variableContext>k__BackingField offset 0x48
 __declspec(property(get=__get__variableContext_k__BackingField, put=__set__variableContext_k__BackingField)) ::UnityEngine::UIElements::StyleVariableContext*  _variableContext_k__BackingField;

 __declspec(property(get=get_currentSheet)) ::UnityEngine::UIElements::StyleSheet*  currentSheet;

 __declspec(property(get=get_currentHandles)) ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  currentHandles;

 __declspec(property(get=get_resolvedValues)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*  resolvedValues;

 __declspec(property(get=get_variableContext, put=set_variableContext)) ::UnityEngine::UIElements::StyleVariableContext*  variableContext;

static inline void setStaticF_s_SyntaxParser(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*  value) ;

static inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* getStaticF_s_SyntaxParser() ;

constexpr void __set_m_Matcher(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* __get_m_Matcher() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*> __get_m_Matcher() const;

constexpr void __set_m_ResolvedValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* __get_m_ResolvedValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*> __get_m_ResolvedValues() const;

constexpr void __set_m_ResolvedVarStack(::System::Collections::Generic::Stack_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::StringW>* __get_m_ResolvedVarStack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::StringW>*> __get_m_ResolvedVarStack() const;

constexpr void __set_m_Property(::UnityEngine::UIElements::StyleProperty*  value) ;

constexpr ::UnityEngine::UIElements::StyleProperty* __get_m_Property() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleProperty*> __get_m_Property() const;

constexpr void __set_m_ContextStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>* __get_m_ContextStack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*> __get_m_ContextStack() const;

constexpr void __set_m_CurrentContext(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext  value) ;

constexpr ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext& __get_m_CurrentContext() ;

constexpr ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext const& __get_m_CurrentContext() const;

constexpr void __set__variableContext_k__BackingField(::UnityEngine::UIElements::StyleVariableContext*  value) ;

constexpr ::UnityEngine::UIElements::StyleVariableContext* __get__variableContext_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleVariableContext*> __get__variableContext_k__BackingField() const;

/// @brief Method get_currentSheet addr 0x2e6a1b8 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::StyleSheet* get_currentSheet() ;

/// @brief Method get_currentHandles addr 0x2e6a1c0 size 0x8 virtual false final false
inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*> get_currentHandles() ;

/// @brief Method get_resolvedValues addr 0x2e6a1c8 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* get_resolvedValues() ;

/// @brief Method get_variableContext addr 0x2e6a1d0 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::StyleVariableContext* get_variableContext() ;

/// @brief Method set_variableContext addr 0x2e6a1d8 size 0x8 virtual false final false
inline void set_variableContext(::UnityEngine::UIElements::StyleVariableContext*  value) ;

/// @brief Method Init addr 0x2e6a1e0 size 0xb0 virtual false final false
inline void Init(::UnityEngine::UIElements::StyleProperty*  property, ::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  handles) ;

/// @brief Method PushContext addr 0x2e6a290 size 0x6c virtual false final false
inline void PushContext(::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  handles) ;

/// @brief Method PopContext addr 0x2e6a2fc size 0x7c virtual false final false
inline void PopContext() ;

/// @brief Method AddValue addr 0x2e6a378 size 0xac virtual false final false
inline void AddValue(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ResolveVarFunction addr 0x2e6a424 size 0xcc virtual false final false
inline bool ResolveVarFunction(ByRef<int32_t>  index) ;

/// @brief Method ResolveVarFunction addr 0x2e6a5a0 size 0x15c virtual false final false
inline ::UnityEngine::UIElements::__StyleVariableResolver__Result ResolveVarFunction(ByRef<int32_t>  index, int32_t  argc, ::StringW  varName) ;

/// @brief Method ValidateResolvedValues addr 0x2e6ac00 size 0x170 virtual false final false
inline bool ValidateResolvedValues() ;

/// @brief Method ResolveVariable addr 0x2e6a6fc size 0x278 virtual false final false
inline ::UnityEngine::UIElements::__StyleVariableResolver__Result ResolveVariable(::StringW  variableName) ;

/// @brief Method ResolveFallback addr 0x2e6a97c size 0x284 virtual false final false
inline ::UnityEngine::UIElements::__StyleVariableResolver__Result ResolveFallback(ByRef<int32_t>  index) ;

/// @brief Method ParseVarFunction addr 0x2e6a4f0 size 0xb0 virtual false final false
static inline void ParseVarFunction(::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>  handles, ByRef<int32_t>  index, ByRef<int32_t>  argCount, ByRef<::StringW>  variableName) ;

static inline ::UnityEngine::UIElements::StyleVariableResolver* New_ctor() ;

/// @brief Method .ctor addr 0x2e6aec8 size 0x134 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StyleVariableResolver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleVariableResolver(StyleVariableResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleVariableResolver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleVariableResolver(StyleVariableResolver const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StyleVariableResolver()  = default;
public:


// Fields

// Static field s_SyntaxParser


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleVariableResolver, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleVariableResolver__Result, "UnityEngine.UIElements", "StyleVariableResolver/Result");
NEED_NO_BOX(::UnityEngine::UIElements::StyleVariableResolver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariableResolver*, "UnityEngine.UIElements", "StyleVariableResolver");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext, "UnityEngine.UIElements", "StyleVariableResolver/ResolveContext");
