#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Converter_2)
namespace System {
class Object;
}
namespace UnityEngine {
struct TreeInstance;
}
// Forward declare root types
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type TOutput>
class Converter_2<::UnityEngine::TreeInstance,TOutput>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type TInput,::il2cpp_utils::il2cpp_reference_type TOutput>
class Converter_2<TInput,TOutput>;
}
namespace System {
template<>
class Converter_2<double_t,float_t>;
}
namespace System {
template<>
class Converter_2<int16_t,float_t>;
}
namespace System {
template<>
class Converter_2<int32_t,float_t>;
}
namespace System {
template<>
class Converter_2<int64_t,float_t>;
}
namespace System {
template<>
class Converter_2<int8_t,float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Converter_2);
// Type: System::Converter`2
// Type: System::Converter`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TOutput>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2340))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 6940 })
// CS Name: ::System::Converter`2<TInput,TOutput>*
class CORDL_TYPE Converter_2<::UnityEngine::TreeInstance,TOutput> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Converter_2<::UnityEngine::TreeInstance,TOutput>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TOutput Invoke(::UnityEngine::TreeInstance  input) ;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Converter_2(Converter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Converter_2(Converter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Converter_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2340)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 5672 })
// CS Name: ::System::Converter`2<TInput,TOutput>*
class CORDL_TYPE Converter_2<int8_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Converter_2<int8_t,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Invoke(int8_t  input) ;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Converter_2(Converter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Converter_2(Converter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Converter_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2340)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 5671 })
// CS Name: ::System::Converter`2<TInput,TOutput>*
class CORDL_TYPE Converter_2<int64_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Converter_2<int64_t,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Invoke(int64_t  input) ;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Converter_2(Converter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Converter_2(Converter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Converter_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2340)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 5670 })
// CS Name: ::System::Converter`2<TInput,TOutput>*
class CORDL_TYPE Converter_2<int16_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Converter_2<int16_t,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Invoke(int16_t  input) ;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Converter_2(Converter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Converter_2(Converter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Converter_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2340)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 5669 })
// CS Name: ::System::Converter`2<TInput,TOutput>*
class CORDL_TYPE Converter_2<double_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Converter_2<double_t,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Invoke(double_t  input) ;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Converter_2(Converter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Converter_2(Converter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Converter_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2340))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 534 })
// CS Name: ::System::Converter`2<TInput,TOutput>*
class CORDL_TYPE Converter_2<int32_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Converter_2<int32_t,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Invoke(int32_t  input) ;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Converter_2(Converter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Converter_2(Converter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Converter_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TInput,::il2cpp_utils::il2cpp_reference_type TOutput>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2340)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 81 })
// CS Name: ::System::Converter`2<TInput,TOutput>*
class CORDL_TYPE Converter_2<TInput,TOutput> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Converter_2<TInput,TOutput>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TOutput Invoke(TInput  input) ;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Converter_2(Converter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Converter_2(Converter_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Converter_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Converter_2, "System", "Converter`2");
