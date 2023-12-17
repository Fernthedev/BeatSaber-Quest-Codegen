#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyName)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StylePropertyName);
// Type: UnityEngine.UIElements::StylePropertyName
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6791))
// CS Name: ::UnityEngine.UIElements::StylePropertyName
struct CORDL_TYPE StylePropertyName : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <id>k__BackingField offset 0x0
 __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId  _id_k__BackingField;

/// @brief Field <name>k__BackingField offset 0x8
 __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField)) ::StringW  _name_k__BackingField;

 __declspec(property(get=get_id)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id;

 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>*() ;

constexpr void __set__id_k__BackingField(::UnityEngine::UIElements::StyleSheets::StylePropertyId  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& __get__id_k__BackingField() ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& __get__id_k__BackingField() const;

constexpr void __set__name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__name_k__BackingField() ;

constexpr ::StringW const& __get__name_k__BackingField() const;

/// @brief Method get_id addr 0x2dbacd8 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId get_id() ;

/// @brief Method get_name addr 0x2dbace0 size 0x8 virtual false final false
inline ::StringW get_name() ;

/// @brief Method StylePropertyIdFromString addr 0x2dbace8 size 0xa0 virtual false final false
static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId StylePropertyIdFromString(::StringW  name) ;

/// @brief Method .ctor addr 0x2dbad88 size 0xac virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleSheets::StylePropertyId  stylePropertyId) ;

/// @brief Method .ctor addr 0x2dbae34 size 0x34 virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method op_Equality addr 0x2dbae68 size 0xc virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StylePropertyName  lhs, ::UnityEngine::UIElements::StylePropertyName  rhs) ;

/// @brief Method op_Inequality addr 0x2dbae74 size 0xc virtual false final false
static inline bool op_Inequality(::UnityEngine::UIElements::StylePropertyName  lhs, ::UnityEngine::UIElements::StylePropertyName  rhs) ;

/// @brief Method op_Implicit addr 0x2dbae80 size 0x20 virtual false final false
static inline ::UnityEngine::UIElements::StylePropertyName op_Implicit___UnityEngine__UIElements__StylePropertyName(::StringW  name) ;

/// @brief Method GetHashCode addr 0x2dbaea0 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2dbaea8 size 0x78 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals addr 0x2dbaf20 size 0x10 virtual true final true
inline bool Equals(::UnityEngine::UIElements::StylePropertyName  other) ;

/// @brief Method ToString addr 0x2dbaf30 size 0x8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr StylePropertyName(::UnityEngine::UIElements::StyleSheets::StylePropertyId  _id_k__BackingField, ::StringW  _name_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StylePropertyName(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StylePropertyName()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyName, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyName, "UnityEngine.UIElements", "StylePropertyName");
