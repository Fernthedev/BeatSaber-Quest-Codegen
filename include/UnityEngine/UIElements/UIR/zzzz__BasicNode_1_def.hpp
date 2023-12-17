#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(BasicNode_1)
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class BasicNode_1;
}
namespace UnityEngine::UIElements::UIR {
template<>
class BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>;
}
namespace UnityEngine::UIElements::UIR {
template<::il2cpp_utils::il2cpp_reference_type T>
class BasicNode_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::BasicNode_1);
// Type: UnityEngine.UIElements.UIR::BasicNode`1
// Type: UnityEngine.UIElements.UIR::BasicNode`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7399)), TypeDefinitionIndex(TypeDefinitionIndex(7401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7399), inst: 3978 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7401), inst: 930 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7401), inst: 928 })
// CS Name: ::UnityEngine.UIElements.UIR::BasicNode`1<T>*
class CORDL_TYPE BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry> : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*>)]{};

/// @brief Field next offset 0x18
 __declspec(property(get=__get_next, put=__set_next)) ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*  next;

/// @brief Field data offset 0x20
 __declspec(property(get=__get_data, put=__set_data)) ::UnityEngine::UIElements::UIR::TextureEntry  data;

constexpr void __set_next(::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*  value) ;

constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*> __get_next() const;

constexpr void __set_data(::UnityEngine::UIElements::UIR::TextureEntry  value) ;

constexpr ::UnityEngine::UIElements::UIR::TextureEntry& __get_data() ;

constexpr ::UnityEngine::UIElements::UIR::TextureEntry const& __get_data() const;

/// @brief Method AppendTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AppendTo(ByRef<::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*>  first) ;

static inline ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicNode_1(BasicNode_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicNode_1(BasicNode_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BasicNode_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::BasicNode`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7399), inst: 3978 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7401), inst: 930 }), TypeDefinitionIndex(TypeDefinitionIndex(7399)), TypeDefinitionIndex(TypeDefinitionIndex(7401))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7401), inst: 2 })
// CS Name: ::UnityEngine.UIElements.UIR::BasicNode`1<T>*
class CORDL_TYPE BasicNode_1<T> : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>)]{};

/// @brief Field next offset 0x18
 __declspec(property(get=__get_next, put=__set_next)) ::UnityEngine::UIElements::UIR::BasicNode_1<T>*  next;

/// @brief Field data offset 0x20
 __declspec(property(get=__get_data, put=__set_data)) T  data;

constexpr void __set_next(::UnityEngine::UIElements::UIR::BasicNode_1<T>*  value) ;

constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<T>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> __get_next() const;

constexpr void __set_data(T  value) ;

constexpr T& __get_data() ;

constexpr T const& __get_data() const;

/// @brief Method AppendTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AppendTo(ByRef<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>  first) ;

static inline ::UnityEngine::UIElements::UIR::BasicNode_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicNode_1(BasicNode_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicNode_1(BasicNode_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BasicNode_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::BasicNode_1, "UnityEngine.UIElements.UIR", "BasicNode`1");
