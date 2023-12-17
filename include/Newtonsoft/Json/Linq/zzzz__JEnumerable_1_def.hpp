#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JEnumerable_1)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Linq {
template<typename T>
class IJEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
template<typename T>
struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
template<::il2cpp_utils::il2cpp_reference_type T>
struct JEnumerable_1<T>;
}
// Write type traits
MARK_GEN_VAL_T(::Newtonsoft::Json::Linq::JEnumerable_1);
// Type: Newtonsoft.Json.Linq::JEnumerable`1
// Type: Newtonsoft.Json.Linq::JEnumerable`1
namespace Newtonsoft::Json::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11989))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11989), inst: 2 })
// CS Name: ::Newtonsoft.Json.Linq::JEnumerable`1<T>
struct CORDL_TYPE JEnumerable_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _enumerable offset 0x0
 __declspec(property(get=__get__enumerable, put=__set__enumerable)) ::System::Collections::Generic::IEnumerable_1<T>*  _enumerable;

 __declspec(property(get=get_Item)) ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*  Item[];

/// @brief Convert operator to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
constexpr operator  ::Newtonsoft::Json::Linq::IJEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

static inline void setStaticF_Empty(::Newtonsoft::Json::Linq::JEnumerable_1<T>  value) ;

static inline ::Newtonsoft::Json::Linq::JEnumerable_1<T> getStaticF_Empty() ;

constexpr void __set__enumerable(::System::Collections::Generic::IEnumerable_1<T>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<T>* __get__enumerable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> __get__enumerable() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  enumerable) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* get_Item(::System::Object*  key) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Equals(::Newtonsoft::Json::Linq::JEnumerable_1<T>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: None }]
constexpr JEnumerable_1(::System::Collections::Generic::IEnumerable_1<T>*  _enumerable) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit JEnumerable_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 JEnumerable_1()  = default;


// Fields

// Static field Empty


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Newtonsoft::Json::Linq::JEnumerable_1, "Newtonsoft.Json.Linq", "JEnumerable`1");
