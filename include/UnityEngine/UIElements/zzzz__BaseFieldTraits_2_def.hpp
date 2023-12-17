#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseFieldTraits_2)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TValueType,typename TValueUxmlAttributeType>
class BaseFieldTraits_2;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TValueType,::il2cpp_utils::il2cpp_reference_type TValueUxmlAttributeType>
class BaseFieldTraits_2<TValueType,TValueUxmlAttributeType>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TValueUxmlAttributeType>
class BaseFieldTraits_2<bool,TValueUxmlAttributeType>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TValueUxmlAttributeType>
class BaseFieldTraits_2<float_t,TValueUxmlAttributeType>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TValueUxmlAttributeType>
class BaseFieldTraits_2<int32_t,TValueUxmlAttributeType>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseFieldTraits_2);
// Type: UnityEngine.UIElements::BaseFieldTraits`2
// Type: UnityEngine.UIElements::BaseFieldTraits`2
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValueUxmlAttributeType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7131)), TypeDefinitionIndex(TypeDefinitionIndex(7129)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 5214 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7131), inst: 1650 })
// CS Name: ::UnityEngine.UIElements::BaseFieldTraits`2<TValueType,TValueUxmlAttributeType>*
class CORDL_TYPE BaseFieldTraits_2<float_t,TValueUxmlAttributeType> : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__BaseField_1__UxmlTraits<float_t>)]{};

/// @brief Field m_Value offset 0x80
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) TValueUxmlAttributeType  m_Value;

constexpr void __set_m_Value(TValueUxmlAttributeType  value) ;

constexpr TValueUxmlAttributeType& __get_m_Value() ;

constexpr TValueUxmlAttributeType const& __get_m_Value() const;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::BaseFieldTraits_2<float_t,TValueUxmlAttributeType>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseFieldTraits_2(BaseFieldTraits_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseFieldTraits_2(BaseFieldTraits_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseFieldTraits_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseFieldTraits`2
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValueUxmlAttributeType>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 5214 }), TypeDefinitionIndex(TypeDefinitionIndex(7131)), TypeDefinitionIndex(TypeDefinitionIndex(7129))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7131), inst: 1610 })
// CS Name: ::UnityEngine.UIElements::BaseFieldTraits`2<TValueType,TValueUxmlAttributeType>*
class CORDL_TYPE BaseFieldTraits_2<int32_t,TValueUxmlAttributeType> : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__BaseField_1__UxmlTraits<int32_t>)]{};

/// @brief Field m_Value offset 0x80
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) TValueUxmlAttributeType  m_Value;

constexpr void __set_m_Value(TValueUxmlAttributeType  value) ;

constexpr TValueUxmlAttributeType& __get_m_Value() ;

constexpr TValueUxmlAttributeType const& __get_m_Value() const;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::BaseFieldTraits_2<int32_t,TValueUxmlAttributeType>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseFieldTraits_2(BaseFieldTraits_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseFieldTraits_2(BaseFieldTraits_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseFieldTraits_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseFieldTraits`2
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValueUxmlAttributeType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7129)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 5214 }), TypeDefinitionIndex(TypeDefinitionIndex(7131))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7131), inst: 1006 })
// CS Name: ::UnityEngine.UIElements::BaseFieldTraits`2<TValueType,TValueUxmlAttributeType>*
class CORDL_TYPE BaseFieldTraits_2<bool,TValueUxmlAttributeType> : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__BaseField_1__UxmlTraits<bool>)]{};

/// @brief Field m_Value offset 0x80
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) TValueUxmlAttributeType  m_Value;

constexpr void __set_m_Value(TValueUxmlAttributeType  value) ;

constexpr TValueUxmlAttributeType& __get_m_Value() ;

constexpr TValueUxmlAttributeType const& __get_m_Value() const;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::BaseFieldTraits_2<bool,TValueUxmlAttributeType>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseFieldTraits_2(BaseFieldTraits_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseFieldTraits_2(BaseFieldTraits_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseFieldTraits_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseFieldTraits`2
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValueType,::il2cpp_utils::il2cpp_reference_type TValueUxmlAttributeType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7131)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 5214 }), TypeDefinitionIndex(TypeDefinitionIndex(7129))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7131), inst: 81 })
// CS Name: ::UnityEngine.UIElements::BaseFieldTraits`2<TValueType,TValueUxmlAttributeType>*
class CORDL_TYPE BaseFieldTraits_2<TValueType,TValueUxmlAttributeType> : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>)]{};

/// @brief Field m_Value offset 0x80
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) TValueUxmlAttributeType  m_Value;

constexpr void __set_m_Value(TValueUxmlAttributeType  value) ;

constexpr TValueUxmlAttributeType& __get_m_Value() ;

constexpr TValueUxmlAttributeType const& __get_m_Value() const;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::BaseFieldTraits_2<TValueType,TValueUxmlAttributeType>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseFieldTraits_2(BaseFieldTraits_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseFieldTraits_2(BaseFieldTraits_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseFieldTraits_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseFieldTraits_2, "UnityEngine.UIElements", "BaseFieldTraits`2");
